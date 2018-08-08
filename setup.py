from distutils.core import setup, Extension

setup(name='ModuleName', version='1.0', ext_modules=[Extension('ModuleName', ['Fib.c'])])