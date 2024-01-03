# generated from
# rosidl_cmake/cmake/template/rosidl_cmake_export_typesupport_targets.cmake.in

set(_exported_typesupport_targets
  "__rosidl_generator_c:mecha_control__rosidl_generator_c;__rosidl_typesupport_fastrtps_c:mecha_control__rosidl_typesupport_fastrtps_c;__rosidl_generator_cpp:mecha_control__rosidl_generator_cpp;__rosidl_typesupport_fastrtps_cpp:mecha_control__rosidl_typesupport_fastrtps_cpp;__rosidl_typesupport_introspection_c:mecha_control__rosidl_typesupport_introspection_c;__rosidl_typesupport_c:mecha_control__rosidl_typesupport_c;__rosidl_typesupport_introspection_cpp:mecha_control__rosidl_typesupport_introspection_cpp;__rosidl_typesupport_cpp:mecha_control__rosidl_typesupport_cpp;__rosidl_generator_py:mecha_control__rosidl_generator_py")

# populate mecha_control_TARGETS_<suffix>
if(NOT _exported_typesupport_targets STREQUAL "")
  # loop over typesupport targets
  foreach(_tuple ${_exported_typesupport_targets})
    string(REPLACE ":" ";" _tuple "${_tuple}")
    list(GET _tuple 0 _suffix)
    list(GET _tuple 1 _target)

    set(_target "mecha_control::${_target}")
    if(NOT TARGET "${_target}")
      # the exported target must exist
      message(WARNING "Package 'mecha_control' exports the typesupport target '${_target}' which doesn't exist")
    else()
      list(APPEND mecha_control_TARGETS${_suffix} "${_target}")
    endif()
  endforeach()
endif()
