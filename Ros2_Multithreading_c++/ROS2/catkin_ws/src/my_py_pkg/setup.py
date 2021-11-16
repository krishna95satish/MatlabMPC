from setuptools import setup

package_name = 'my_py_pkg'

setup(
    name=package_name,
    version='0.0.0',
    packages=[package_name],
    data_files=[
        ('share/ament_index/resource_index/packages',
            ['resource/' + package_name]),
        ('share/' + package_name, ['package.xml']),
    ],
    install_requires=['setuptools'],
    zip_safe=True,
    maintainer='krishna',
    maintainer_email='krishna@todo.todo',
    description='TODO: Package description',
    license='TODO: License declaration',
    tests_require=['pytest'],
    entry_points={
        'console_scripts': [
            "py_exe = my_py_pkg.first_py_node:main",
            "pyclass_exe = my_py_pkg.class_node:main",
            "pyPub_exe = my_py_pkg.py_pub:main",
            "pySub_exe = my_py_pkg.py_sub:main",
            "pyServer_exe = my_py_pkg.pyServer:main",
            "pyClient_exe = my_py_pkg.pyClient:main",
            "pyClientOOPS_exe = my_py_pkg.pyClientOOPS:main"
        ],
    },
)
