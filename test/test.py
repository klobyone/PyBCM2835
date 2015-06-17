import PyBCM2835

if not (PyBCM2835.init()):
  raise EnvironmentError("Cannot initialize BCM2835.")
PyBCM2835.i2c_begin()
PyBCM2835.i2c_setSlaveAddress(0x40)
PyBCM2835.i2c_write(chr(227),1)
PyBCM2835.delay(600)
data=""+chr(0)+chr(0)+chr(0)
PyBCM2835.i2c_read(data,3)
int(ord(data[0])*256+ord(data[1]))/(2.0**16)*175.72-46.85


