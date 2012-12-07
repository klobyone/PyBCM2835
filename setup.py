from distutils.core import setup, Extension

module1 = Extension('PyBCM2835',
					include_dirs = ['/usr/local/include'],
					libraries = ['bcm2835'],
					library_dirs = ['/usr/local/lib'],
                    sources = ['PyBCM2835.c'])

setup (name = 'PyBCM2835',
       version = '0.1',
       description = 'Python extension for libcm2835.',
	   author='Chris Kloberdanz',
	   author_email='klobyone@gmail.com',
	   license='GPL',
	   url='http://www.github.com/klobyone/PyBCM2385/',
	   ext_modules = [module1])
