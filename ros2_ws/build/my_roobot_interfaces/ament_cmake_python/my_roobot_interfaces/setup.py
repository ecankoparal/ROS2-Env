from setuptools import find_packages
from setuptools import setup

setup(
    name='my_roobot_interfaces',
    version='0.0.0',
    packages=find_packages(
        include=('my_roobot_interfaces', 'my_roobot_interfaces.*')),
)
