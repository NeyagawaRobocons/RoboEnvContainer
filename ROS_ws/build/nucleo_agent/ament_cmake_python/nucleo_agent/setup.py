from setuptools import find_packages
from setuptools import setup

setup(
    name='nucleo_agent',
    version='0.0.0',
    packages=find_packages(
        include=('nucleo_agent', 'nucleo_agent.*')),
)
