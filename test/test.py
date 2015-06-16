import PyBCM2835

if not (PyBCM2835.init()):
  raise EnvironmentError("Cannot initialize BCM2835.")
PyBCM2835.i2c_begin()
PyBCM2835.i2c_setSlaveAddress(0x0f)
PyBCM2835.i2c_write(chr(3),1)
