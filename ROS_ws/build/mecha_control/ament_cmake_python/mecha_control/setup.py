from setuptools import find_packages
from setuptools import setup

setup(
    name='mecha_control',
    version='0.0.0',
    packages=find_packages(
        include=('mecha_control', 'mecha_control.*')),
)
