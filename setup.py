from distutils.core import setup, Extension

pybcm2835 = Extension('PyBCM2835',
					include_dirs = ['/usr/local/include'],
					libraries = ['bcm2835'],
					library_dirs = ['/usr/local/lib'],
                    sources = ['src/PyBCM2835.c'])

setup (name = 'PyBCM2835',
       version = '0.1.0',
       description = 'Python extension for libbcm2835.',
	   author='Chris Kloberdanz',
	   author_email='klobyone@gmail.com',
	   license='GPLv2',
       keywords=["raspberry pi", "bcm2835", "gpio"],
	   classifiers=[
	       "Programming Language :: Python",
           "Development Status :: 3 - Alpha",
	       "Topic :: System :: Hardware"
	   ],
	   url='http://www.github.com/klobyone/PyBCM2385/',
	   ext_modules = [pybcm2835])
