#include "rclcpp/rclcpp.hpp"
#include "std_msgs/msg/string.hpp"
#include <iostream>
#include <cstring>
#include <fcntl.h>
#include <termios.h>
#include <unistd.h>
#include <filesystem>

class SerialPublisherNode : public rclcpp::Node {
public:
  SerialPublisherNode() : Node("serial_publisher_node") {
    // シリアルポートデバイスがあるディレクトリ
    const std::filesystem::path dev_path = "/dev/";

    std::cout << "Available serial ports:" << std::endl;

    // /dev ディレクトリ内のエントリを走査し、シリアルポートデバイスを表示
    for (const auto& entry : std::filesystem::directory_iterator(dev_path)) {
        // デバイスファイルのプレフィックスを確認
        if (entry.is_character_file() || entry.is_symlink()) {
            std::string filename = entry.path().filename().string();
            if (filename.find("ttyS") != std::string::npos ||
                filename.find("ttyUSB") != std::string::npos ||
                filename.find("ttyACM") != std::string::npos) {
                std::cout << entry.path() << std::endl;
            }
        }
    }
    const char* serial_port = "/dev/ttyACM0";
    int serial_fd = open(serial_port, O_RDWR | O_NOCTTY);
    if (serial_fd == -1) {
        perror("Error opening serial port");
        return;
    }
    // シリアル通信の設定
    struct termios tty;
    memset(&tty, 0, sizeof(tty));
    if (tcgetattr(serial_fd, &tty) != 0) {
        perror("Error getting serial port attributes");
        close(serial_fd);
        return;
    }

    cfsetospeed(&tty, B115200); // ボーレートの設定 (例: 115200 bps)
    cfsetispeed(&tty, B115200);

    tty.c_cflag |= (CLOCAL | CREAD); // 有効なオプション
    tty.c_cflag &= ~PARENB;          // パリティ無効
    tty.c_cflag &= ~CSTOPB;          // ストップビット 1
    tty.c_cflag &= ~CSIZE;           // データビットマスク
    tty.c_cflag |= CS8;              // データビット 8

    // シリアル通信の設定を適用
    if (tcsetattr(serial_fd, TCSANOW, &tty) != 0) {
        perror("Error setting serial port attributes");
        close(serial_fd);
        return;
    }

    // トピックの初期化
    publisher_ = create_publisher<std_msgs::msg::String>("serial_data", 10);

    // シリアルポートの読み取りを開始
    startReadingSerial();

    RCLCPP_INFO(this->get_logger(), "SerialPublisherNode started");
  }
  private:
  void startReadingSerial() {
    // 非同期にシリアルポートの読み取りを行う
    serial_thread_ = std::thread([this]() {
      char buffer[256];
      ssize_t n;
      int count = 0;
      while (rclcpp::ok()) {
        RCLCPP_INFO(this->get_logger(), "loop : %d", count);
        n = read(this->serial_fd, buffer, sizeof(buffer));
        if (n > 0) {
            // データを処理する部分
            std::cout.write(buffer, n);
        } else if (n < 0) {
            RCLCPP_ERROR(this->get_logger(), "Error reading from serial port");
            break;
        }
        // シリアルポートからデータを読み取る処理
        std::string data(buffer, n);
        
        // 読み取ったデータをトピックにパブリッシュ
        auto message = std_msgs::msg::String();
        message.data = data;
        publisher_->publish(message);

        // ここで他に必要な処理を行う
      }
    });
  }

  rclcpp::Publisher<std_msgs::msg::String>::SharedPtr publisher_;
  std::thread serial_thread_;
  int serial_fd;
};

int main(int argc, char *argv[]) {
  rclcpp::init(argc, argv);
  auto node = std::make_shared<SerialPublisherNode>();
  rclcpp::spin(node);
  rclcpp::shutdown();
  return 0;
}

// class MyPublisher : public rclcpp::Node {
// public:
//   MyPublisher() : Node("my_publisher"), count_(0) {
//     publisher_ = this->create_publisher<std_msgs::msg::String>("topic", 10);
//     timer_ = create_wall_timer(std::chrono::milliseconds(500), [this]() {
//       publishMessage();
//     });
//   }

// private:
//   void publishMessage() {
//     auto message = std_msgs::msg::String();
//     message.data = "Hello, ROS 2! Count: " + std::to_string(count_);

//     RCLCPP_INFO(this->get_logger(), "Publishing: %s", message.data.c_str());

//     publisher_->publish(message);

//     count_++;
//   }

//   rclcpp::TimerBase::SharedPtr timer_;
//   rclcpp::Publisher<std_msgs::msg::String>::SharedPtr publisher_;
//   size_t count_;
// };

// int main(int argc, char **argv) {
//   rclcpp::init(argc, argv);
//   auto node = std::make_shared<MyPublisher>();
//   rclcpp::spin(node);
//   rclcpp::shutdown();
//   return 0;
// }
