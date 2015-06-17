#include <Python.h>
#include <bcm2835.h>

static PyObject *
PyBCM2835_init(PyObject *self)
{
	int rtn = bcm2835_init();

	return Py_BuildValue("i",rtn);
}

static PyObject *
PyBCM2835_close(PyObject *self)
{
	int rtn = bcm2835_close();

	return Py_BuildValue("i",rtn);
}

static PyObject *
PyBCM2835_set_debug(PyObject *self, PyObject *args)
{
	int i;

	if (!PyArg_ParseTuple(args,"i",&i)) {
		return NULL;
	}

	bcm2835_set_debug(i);

	Py_RETURN_NONE;
}

static PyObject *
PyBCM2835_gpio_fsel(PyObject *self, PyObject *args)
{
	uint8_t pin;
	uint8_t mode;

	if (!PyArg_ParseTuple(args,"ii",&pin,&mode)) {
		return NULL;
	}

	bcm2835_gpio_fsel(pin,mode);

	Py_RETURN_NONE;
}

static PyObject *
PyBCM2835_gpio_set(PyObject *self, PyObject *args)
{
	int pin;

	if (!PyArg_ParseTuple(args,"i",&pin)) {
		return NULL;
	}

	bcm2835_gpio_set(pin);

	Py_RETURN_NONE;
}

static PyObject *
PyBCM2835_gpio_clr(PyObject *self, PyObject *args)
{
	int pin;

	if (!PyArg_ParseTuple(args,"i",&pin)) {
		return NULL;
	}

	bcm2835_gpio_clr(pin);
	
	Py_RETURN_NONE;
}

static PyObject *
PyBCM2835_gpio_lev(PyObject *self, PyObject *args)
{
	int i;

	if (!PyArg_ParseTuple(args,"i",&i)) {
		return NULL;
	}

	uint8_t lev = bcm2835_gpio_lev(i);
	
	return Py_BuildValue("i",lev);
}

static PyObject *
PyBCM2835_gpio_eds(PyObject *self, PyObject *args)
{
	uint8_t pin;

	if (!PyArg_ParseTuple(args,"i",&pin)) {
		return NULL;
	}

	uint8_t lev = bcm2835_gpio_lev(pin);
	
	return Py_BuildValue("i",lev);
}

static PyObject *
PyBCM2835_gpio_set_eds(PyObject *self, PyObject *args)
{
	uint8_t pin;

	if (!PyArg_ParseTuple(args,"i",&pin)) {
		return NULL;
	}

	bcm2835_gpio_set_eds(pin);

	Py_RETURN_NONE;
}

static PyObject *
PyBCM2835_gpio_ren(PyObject *self, PyObject *args)
{
	uint8_t pin;

	if (!PyArg_ParseTuple(args,"i",&pin)) {
		return NULL;
	}

	bcm2835_gpio_ren(pin);

	Py_RETURN_NONE;
}

static PyObject *
PyBCM2835_gpio_clr_ren(PyObject *self, PyObject *args)
{
	uint8_t pin;

	if (!PyArg_ParseTuple(args,"i",&pin)) {
		return NULL;
	}

	bcm2835_gpio_clr_ren(pin);

	Py_RETURN_NONE;
}

static PyObject *
PyBCM2835_gpio_fen(PyObject *self, PyObject *args)
{
	uint8_t pin;

	if (!PyArg_ParseTuple(args,"i",&pin)) {
		return NULL;
	}

	bcm2835_gpio_fen(pin);

	Py_RETURN_NONE;
}

static PyObject *
PyBCM2835_gpio_clr_fen(PyObject *self, PyObject *args)
{
	uint8_t pin;

	if (!PyArg_ParseTuple(args,"i",&pin)) {
		return NULL;
	}

	bcm2835_gpio_clr_fen(pin);

	Py_RETURN_NONE;
}

static PyObject *
PyBCM2835_gpio_hen(PyObject *self, PyObject *args)
{
	uint8_t pin;

	if (!PyArg_ParseTuple(args,"i",&pin)) {
		return NULL;
	}

	bcm2835_gpio_hen(pin);

	Py_RETURN_NONE;
}

static PyObject *
PyBCM2835_gpio_clr_hen(PyObject *self, PyObject *args)
{
	uint8_t pin;

	if (!PyArg_ParseTuple(args,"i",&pin)) {
		return NULL;
	}

	bcm2835_gpio_clr_hen(pin);

	Py_RETURN_NONE;
}

static PyObject *
PyBCM2835_gpio_len(PyObject *self, PyObject *args)
{
	uint8_t pin;

	if (!PyArg_ParseTuple(args,"i",&pin)) {
		return NULL;
	}

	bcm2835_gpio_len(pin);

	Py_RETURN_NONE;
}

static PyObject *
PyBCM2835_gpio_clr_len(PyObject *self, PyObject *args)
{
	uint8_t pin;

	if (!PyArg_ParseTuple(args,"i",&pin)) {
		return NULL;
	}

	bcm2835_gpio_clr_len(pin);

	Py_RETURN_NONE;
}

static PyObject *
PyBCM2835_gpio_aren(PyObject *self, PyObject *args)
{
	uint8_t pin;

	if (!PyArg_ParseTuple(args,"i",&pin)) {
		return NULL;
	}

	bcm2835_gpio_aren(pin);

	Py_RETURN_NONE;
}

static PyObject *
PyBCM2835_gpio_clr_aren(PyObject *self, PyObject *args)
{
	uint8_t pin;

	if (!PyArg_ParseTuple(args,"i",&pin)) {
		return NULL;
	}

	bcm2835_gpio_clr_aren(pin);

	Py_RETURN_NONE;
}

static PyObject *
PyBCM2835_gpio_afen(PyObject *self, PyObject *args)
{
	uint8_t pin;

	if (!PyArg_ParseTuple(args,"i",&pin)) {
		return NULL;
	}

	bcm2835_gpio_afen(pin);

	Py_RETURN_NONE;
}

static PyObject *
PyBCM2835_gpio_clr_afen(PyObject *self, PyObject *args)
{
	uint8_t pin;

	if (!PyArg_ParseTuple(args,"i",&pin)) {
		return NULL;
	}

	bcm2835_gpio_clr_afen(pin);

	Py_RETURN_NONE;
}

static PyObject *
PyBCM2835_gpio_pud(PyObject *self, PyObject *args)
{
	uint8_t pin;

	if (!PyArg_ParseTuple(args,"i",&pin)) {
		return NULL;
	}

	bcm2835_gpio_pud(pin);

	Py_RETURN_NONE;
}

static PyObject *
PyBCM2835_gpio_pudclk(PyObject *self, PyObject *args)
{
	uint8_t pin;
	uint8_t on;

	if (!PyArg_ParseTuple(args,"ii",&pin,&on)) {
		return NULL;
	}

	bcm2835_gpio_pudclk(pin,on);

	Py_RETURN_NONE;
}

static PyObject *
PyBCM2835_gpio_pad(PyObject *self, PyObject *args)
{
	uint8_t group;

	if (!PyArg_ParseTuple(args,"i",&group)) {
		return NULL;
	}

	uint32_t rtn = bcm2835_gpio_pad(group);

	return Py_BuildValue("i",rtn);
}

static PyObject *
PyBCM2835_gpio_set_pad(PyObject *self, PyObject *args)
{
	uint8_t group;
	uint32_t control;

	if (!PyArg_ParseTuple(args,"ii",&group,&control)) {
		return NULL;
	}

	bcm2835_gpio_set_pad(group,control);

	Py_RETURN_NONE;
}

static PyObject *
PyBCM2835_delay(PyObject *self, PyObject *args)
{
	unsigned int millis;

	if (!PyArg_ParseTuple(args,"i",&millis)) {
		return NULL;
	}

	bcm2835_delay(millis);
	
	Py_RETURN_NONE;
}

static PyObject *
PyBCM2835_delay_microseconds(PyObject *self, PyObject *args)
{
	unsigned int micros;

	if (!PyArg_ParseTuple(args,"i",&micros)) {
		return NULL;
	}

	bcm2835_delayMicroseconds(micros);
	
	Py_RETURN_NONE;
}

static PyObject *
PyBCM2835_gpio_write(PyObject *self, PyObject *args)
{
	uint8_t pin;
	uint8_t on;

	if (!PyArg_ParseTuple(args,"ii",&pin,&on)) {
		return NULL;
	}

	bcm2835_gpio_write(pin,on);

	Py_RETURN_NONE;
}

static PyObject *
PyBCM2835_gpio_set_pud(PyObject *self, PyObject *args)
{
	uint8_t pin;
	uint8_t pud;

	if (!PyArg_ParseTuple(args,"ii",&pin,&pud)) {
		return NULL;
	}

	bcm2835_gpio_set_pud(pin,pud);

	Py_RETURN_NONE;
}

static PyObject *
PyBCM2835_spi_begin(PyObject *self, PyObject *args)
{
	bcm2835_spi_begin();

	Py_RETURN_NONE;
}

static PyObject *
PyBCM2835_spi_end(PyObject *self, PyObject *args)
{
	bcm2835_spi_end();

	Py_RETURN_NONE;
}

static PyObject *
PyBCM2835_spi_setBitOrder(PyObject *self, PyObject *args)
{
	uint8_t order;

	if (!PyArg_ParseTuple(args,"i",&order)) {
		return NULL;
	}

	bcm2835_spi_chipSelect(order);

	Py_RETURN_NONE;
}

static PyObject *
PyBCM2835_spi_setClockDivider(PyObject *self, PyObject *args)
{
	uint16_t divider;

	if (!PyArg_ParseTuple(args,"i",&divider)) {
		return NULL;
	}

	bcm2835_spi_setClockDivider(divider);

	Py_RETURN_NONE;
}


static PyObject *
PyBCM2835_spi_setDataMode(PyObject *self, PyObject *args)
{
	uint8_t mode;

	if (!PyArg_ParseTuple(args,"i",&mode)) {
		return NULL;
	}

	bcm2835_spi_setDataMode(mode);

	Py_RETURN_NONE;
}

static PyObject *
PyBCM2835_spi_chipSelect(PyObject *self, PyObject *args)
{
	uint8_t cs;

	if (!PyArg_ParseTuple(args,"i",&cs)) {
		return NULL;
	}

	bcm2835_spi_chipSelect(cs);

	Py_RETURN_NONE;
}

static PyObject *
PyBCM2835_spi_setChipSelectPolarity(PyObject *self, PyObject *args)
{
	uint8_t cs;
	uint8_t active;

	if (!PyArg_ParseTuple(args,"ii",&cs,&active)) {
		return NULL;
	}

	bcm2835_spi_setChipSelectPolarity(cs,active);

	Py_RETURN_NONE;
}

static PyObject *
PyBCM2835_spi_transfer(PyObject *self, PyObject *args)
{
	uint8_t value;

	if (!PyArg_ParseTuple(args,"i",&value)) {
		return NULL;
	}

	uint8_t rtn = bcm2835_spi_transfer(value);

	return Py_BuildValue("i",rtn);
}

static PyObject *
PyBCM2835_spi_transfernb(PyObject *self, PyObject *args)
{
	char *tbuf;
	char *rbuf;
	int tbuf_len;
	int rbuf_len;
	uint32_t len;

	if (!PyArg_ParseTuple(args,"s#s#i",&tbuf, &tbuf_len, &rbuf, &rbuf_len,&len)) {
		return NULL;
	}

	bcm2835_spi_transfernb(tbuf,rbuf,len);

	Py_RETURN_NONE;
}

static PyObject *
PyBCM2835_spi_transfern(PyObject *self, PyObject *args)
{
	char *buf;
	int buf_len;
	uint32_t len;

	if (!PyArg_ParseTuple(args,"s#i",&buf, &buf_len,&len)) {
		return NULL;
	}

	bcm2835_spi_transfern(buf,len);

	Py_RETURN_NONE;
}

static PyObject *
PyBCM2835_i2c_begin(PyObject *self)
{
	bcm2835_i2c_begin();
	Py_RETURN_NONE;
}

static PyObject *
PyBCM2835_i2c_end(PyObject *self)
{
	bcm2835_i2c_end();
	Py_RETURN_NONE;
}

static PyObject *
PyBCM2835_i2c_setSlaveAddress(PyObject *self, PyObject *args)
{
	int addr;

	if (!PyArg_ParseTuple(args,"i",&addr)) {
		return NULL;
	}

	bcm2835_i2c_setSlaveAddress(addr);
	Py_RETURN_NONE;
}

static PyObject *
PyBCM2835_i2c_setClockDivider(PyObject *self, PyObject *args)
{
	int divider;

	if (!PyArg_ParseTuple(args,"i",&divider)) {
		return NULL;
	}

	bcm2835_i2c_setClockDivider(divider);
	Py_RETURN_NONE;
}

static PyObject *
PyBCM2835_i2c_set_baudrate(PyObject *self, PyObject *args)
{
	uint32_t baudrate;
	if (!PyArg_ParseTuple(args,"i",&baudrate)) {
		return NULL;
	}

	bcm2835_i2c_set_baudrate(baudrate);
	Py_RETURN_NONE;
}

static PyObject *
PyBCM2835_i2c_write(PyObject *self, PyObject *args)
{
	char *buf;
	int buf_len;
	uint32_t len;

	if (!PyArg_ParseTuple(args,"s#i",&buf, &buf_len,&len)) {
		return NULL;
	}

	uint8_t rtn = bcm2835_i2c_write(buf, len);
	return Py_BuildValue("i",rtn);
}

static PyObject *
PyBCM2835_i2c_read(PyObject *self, PyObject *args)
{
	char *buf;
	int buf_len;
	uint32_t len;

	if (!PyArg_ParseTuple(args,"s#i",&buf, &buf_len,&len)) {
		return NULL;
	}

	uint8_t rtn = bcm2835_i2c_read(buf, len);
	return Py_BuildValue("i",rtn);
}

static PyObject *
PyBCM2835_i2c_read_register_rs(PyObject *self, PyObject *args)
{
	char *tbuf;
	char *rbuf;
	int tbuf_len;
	int rbuf_len;
	uint32_t len;

	if (!PyArg_ParseTuple(args,"s#s#i",&tbuf, &tbuf_len, &rbuf, &rbuf_len,&len)) {
		return NULL;
	}

	uint8_t rtn = bcm2835_i2c_read_register_rs(tbuf, rbuf, len);
	return Py_BuildValue("i",rtn);
}

static PyObject *
PyBCM2835_i2c_write_read_rs(PyObject *self, PyObject *args)
{
	char *cmds;
	char *buf;
	int cmds_len;
	int cmds_len2;
	int buf_len;
	
	if (!PyArg_ParseTuple(args,"s#ls#",&cmds, &cmds_len, &cmds_len2, &buf, &buf_len)) {
		return NULL;
	}

	uint8_t rtn = bcm2835_i2c_write_read_rs(cmds, cmds_len, buf, buf_len);
	return Py_BuildValue("i",rtn);
}

static PyObject *PyBCM2835Error;

static PyMethodDef PyBCM2835Methods[] = {
    {"init", (PyCFunction)PyBCM2835_init, METH_NOARGS, "Initialize BCM2835 library."},
    {"close", (PyCFunction)PyBCM2835_close, METH_NOARGS, "Close BCM2835 library."},
    {"set_debug", (PyCFunction)PyBCM2835_set_debug, METH_VARARGS, "Set debug level."},
    {"gpio_fsel", (PyCFunction)PyBCM2835_gpio_fsel, METH_VARARGS, "Sets the Function Select register for the given pin, which configures the pin as Input, Output or one of the 6 alternate functions."},
    {"gpio_set", (PyCFunction)PyBCM2835_gpio_set, METH_VARARGS, "Sets the specified pin output to HIGH."},
    {"gpio_clr", (PyCFunction)PyBCM2835_gpio_clr, METH_VARARGS, "Sets the specified pin output to LOW."},
    {"gpio_lev", (PyCFunction)PyBCM2835_gpio_lev, METH_VARARGS, "Reads the current level on the specified pin and returns either HIGH or LOW. Works whether or not the pin is an input or an output."},
    {"gpio_eds", (PyCFunction)PyBCM2835_gpio_eds, METH_VARARGS, "Event Detect Status. Tests whether the specified pin has detected a level or edge."},
    {"gpio_set_eds", (PyCFunction)PyBCM2835_gpio_set_eds, METH_VARARGS, "Sets the Event Detect Status register for a given pin to 1, which has the effect of clearing the flag. Use this afer seeing an Event Detect Status on the pin."},
    {"gpio_ren", (PyCFunction)PyBCM2835_gpio_ren, METH_VARARGS, "Enable Rising Edge Detect Enable for the specified pin. When a rising edge is detected, sets the appropriate pin in Event Detect Status. The GPRENn registers use synchronous edge detection. This means the input signal is sampled using the system clock and then it is looking for a ?011? pattern on the sampled signal. This has the effect of suppressing glitches."},
    {"gpio_clr_ren", (PyCFunction)PyBCM2835_gpio_clr_ren, METH_VARARGS, "Disable Rising Edge Detect Enable for the specified pin."},
    {"gpio_fen", (PyCFunction)PyBCM2835_gpio_fen, METH_VARARGS, "Disable Falling Edge Detect Enable for the specified pin."},
    {"gpio_clr_fen", (PyCFunction)PyBCM2835_gpio_clr_fen, METH_VARARGS, "Disable Falling Edge Detect Enable for the specified pin."},
    {"gpio_hen", (PyCFunction)PyBCM2835_gpio_hen, METH_VARARGS, "Enable High Detect Enable for the specified pin. When a HIGH level is detected on the pin, sets the appropriate pin in Event Detect Status."},
    {"gpio_clr_hen", (PyCFunction)PyBCM2835_gpio_clr_hen, METH_VARARGS, "Disable High Detect Enable for the specified pin."},
    {"gpio_len", (PyCFunction)PyBCM2835_gpio_len, METH_VARARGS, "Enable Low Detect Enable for the specified pin. When a LOW level is detected on the pin, sets the appropriate pin in Event Detect Status."},
    {"gpio_clr_len", (PyCFunction)PyBCM2835_gpio_clr_len, METH_VARARGS, "Disable Low Detect Enable for the specified pin."},
    {"gpio_aren", (PyCFunction)PyBCM2835_gpio_aren, METH_VARARGS, "Enable Asynchronous Rising Edge Detect Enable for the specified pin. When a rising edge is detected, sets the appropriate pin in Event Detect Status. Asynchronous means the incoming signal is not sampled by the system clock. As such rising edges of very short duration can be detected."},
    {"gpio_clr_aren", (PyCFunction)PyBCM2835_gpio_clr_aren, METH_VARARGS, "Disable Asynchronous Rising Edge Detect Enable for the specified pin."},
    {"gpio_afen", (PyCFunction)PyBCM2835_gpio_afen, METH_VARARGS, "Enable Asynchronous Falling Edge Detect Enable for the specified pin. When a falling edge is detected, sets the appropriate pin in Event Detect Status. Asynchronous means the incoming signal is not sampled by the system clock. As such falling edges of very short duration can be detected."},
    {"gpio_clr_afen", (PyCFunction)PyBCM2835_gpio_clr_afen, METH_VARARGS, "Disable Asynchronous Falling Edge Detect Enable for the specified pin."},
    {"gpio_pud", (PyCFunction)PyBCM2835_gpio_pud, METH_VARARGS, "Sets the Pull-up/down register for the given pin."},
    {"gpio_pudclk", (PyCFunction)PyBCM2835_gpio_pudclk, METH_VARARGS, "Clocks the Pull-up/down value set earlier by bcm2835_gpio_pud() into the pin."},
    {"gpio_pad", (PyCFunction)PyBCM2835_gpio_pad, METH_VARARGS, "Reads and returns the Pad Control for the given GPIO group."},
    {"gpio_set_pad", (PyCFunction)PyBCM2835_gpio_set_pad, METH_VARARGS, "Sets the Pad Control for the given GPIO group."},
    {"delay", (PyCFunction)PyBCM2835_delay, METH_VARARGS, "Delays for the specified number of milliseconds."},
    {"delay_microseconds", (PyCFunction)PyBCM2835_delay_microseconds, METH_VARARGS, "Delays for the specified number of microseconds."},
    {"gpio_write", (PyCFunction)PyBCM2835_gpio_write, METH_VARARGS, "Sets the output state of the specified pin."},
    {"gpio_set_pud", (PyCFunction)PyBCM2835_gpio_set_pud, METH_VARARGS, "Sets the Pull-up/down mode for the specified pin."},
    {"spi_begin", (PyCFunction)PyBCM2835_spi_begin, METH_NOARGS, "Start SPI operations."},
    {"spi_end", (PyCFunction)PyBCM2835_spi_end, METH_NOARGS, "End SPI operations."},
    {"spi_setBitOrder", (PyCFunction)PyBCM2835_spi_setBitOrder, METH_VARARGS, "Sets the SPI bit order NOTE: has no effect."},
    {"spi_setClockDivider", (PyCFunction)PyBCM2835_spi_setClockDivider, METH_VARARGS, "Sets the SPI clock divider and therefore the SPI clock speed."},
    {"spi_setDataMode", (PyCFunction)PyBCM2835_spi_setDataMode, METH_VARARGS, "Sets the SPI data mode Sets the clock polariy and phase."},
    {"spi_chipSelect", (PyCFunction)PyBCM2835_spi_chipSelect, METH_VARARGS, "Sets the chip select pin(s) When an bcm2835_spi_transfer() is made, the selected pin(s) will be asserted during the transfer."},
    {"spi_setChipSelectPolarity", (PyCFunction)PyBCM2835_spi_setChipSelectPolarity, METH_VARARGS, "Sets the chip select pin polarity for a given pin."},
    {"spi_transfer", (PyCFunction)PyBCM2835_spi_transfer, METH_VARARGS, "Transfers one byte to and from the currently selected SPI slave."},
    {"spi_transfernb", (PyCFunction)PyBCM2835_spi_transfernb, METH_VARARGS, "Transfers any number of bytes to and from the currently selected SPI slave."},
    {"spi_transfern", (PyCFunction)PyBCM2835_spi_transfern, METH_VARARGS, "Transfers any number of bytes to and from the currently selected SPI slave using bcm2835_spi_transfernb. "},
    {"i2c_begin", (PyCFunction)PyBCM2835_i2c_begin, METH_NOARGS, "Start I2C operations."},
    {"i2c_end", (PyCFunction)PyBCM2835_i2c_end, METH_NOARGS, "End I2C operations"},
    {"i2c_setSlaveAddress", (PyCFunction)PyBCM2835_i2c_setSlaveAddress, METH_VARARGS, "Sets the I2C clock divider by converting the baudrate parameter to the equivalent I2C clock divider."},
    {"i2c_setClockDivider", (PyCFunction)PyBCM2835_i2c_setClockDivider, METH_VARARGS, "Set the clock divider, 2500 = 10us = 100 kHz,622 = 2.504us = 399.3610 kHz,150 = 60ns = 1.666 MHz (default at reset),148 = 59ns = 1.689 MHz"},
    {"i2c_setBaudrate", (PyCFunction)PyBCM2835_i2c_set_baudrate, METH_VARARGS, "Set the baudrate"},
    {"i2c_write", (PyCFunction)PyBCM2835_i2c_write, METH_VARARGS, "Write any number of bytes to the devices"},
    {"i2c_read", (PyCFunction)PyBCM2835_i2c_read, METH_VARARGS, "Read any number of bytes from the devices"},
    {"i2c_read_register_rs", (PyCFunction)PyBCM2835_i2c_read_register_rs, METH_VARARGS, "Allows reading from I2C slaves that require a repeated start (without any prior stop) to read after the required slave register has been set. For example, the popular MPL3115A2 pressure and temperature sensor. Note that your device must support or require this mode. If your device does not require this mode then the standard combined"},
    {"i2c_write_read_rs", (PyCFunction)PyBCM2835_i2c_write_read_rs, METH_VARARGS, "Allows sending an arbitrary number of bytes to I2C slaves before issuing a repeated start (with no prior stop) and reading a response. Necessary for devices that require such behavior, such as the MLX90620"},
    {NULL, NULL, 0, NULL}        /* Sentinel */
};

PyMODINIT_FUNC
initPyBCM2835(void)
{
    PyObject *m;

    m = Py_InitModule("PyBCM2835", PyBCM2835Methods);
    if (m == NULL)
        return;

	// Constants
	PyModule_AddIntConstant(m,"HIGH",1);
	PyModule_AddIntConstant(m,"LOW",0);
	PyModule_AddIntConstant(m,"PERI_BASE",BCM2835_PERI_BASE);
	PyModule_AddIntConstant(m,"GPIO_PADS",BCM2835_GPIO_PADS);
	PyModule_AddIntConstant(m,"CLOCK_BASE",BCM2835_CLOCK_BASE);
	PyModule_AddIntConstant(m,"GPIO_BASE",BCM2835_GPIO_BASE);
	PyModule_AddIntConstant(m,"SPI0_BASE",BCM2835_SPI0_BASE);
	PyModule_AddIntConstant(m,"GPIO_PWM",BCM2835_GPIO_PWM);
	PyModule_AddIntConstant(m,"PAGE_SIZE",BCM2835_PAGE_SIZE);
	PyModule_AddIntConstant(m,"BLOCK_SIZE",BCM2835_BLOCK_SIZE);
	PyModule_AddIntConstant(m,"GPFSEL0",BCM2835_GPFSEL0);
	PyModule_AddIntConstant(m,"GPFSEL1",BCM2835_GPFSEL1);
	PyModule_AddIntConstant(m,"GPFSEL2",BCM2835_GPFSEL2);
	PyModule_AddIntConstant(m,"GPFSEL3",BCM2835_GPFSEL3);
	PyModule_AddIntConstant(m,"GPFSEL4",BCM2835_GPFSEL4);
	PyModule_AddIntConstant(m,"GPFSEL5",BCM2835_GPFSEL5);
	PyModule_AddIntConstant(m,"GPSET0",BCM2835_GPSET0);
	PyModule_AddIntConstant(m,"GPSET1",BCM2835_GPSET1);
	PyModule_AddIntConstant(m,"GPCLR0",BCM2835_GPCLR0);
	PyModule_AddIntConstant(m,"GPCLR1",BCM2835_GPCLR1);
	PyModule_AddIntConstant(m,"GPLEV0",BCM2835_GPLEV0);
	PyModule_AddIntConstant(m,"GPLEV1",BCM2835_GPLEV1);
	PyModule_AddIntConstant(m,"GPEDS0",BCM2835_GPEDS0);
	PyModule_AddIntConstant(m,"GPEDS1",BCM2835_GPEDS1);
	PyModule_AddIntConstant(m,"GPREN0",BCM2835_GPREN0);
	PyModule_AddIntConstant(m,"GPREN1",BCM2835_GPREN1);
	PyModule_AddIntConstant(m,"GPFEN0",BCM2835_GPFEN0);
	PyModule_AddIntConstant(m,"GPFEN1",BCM2835_GPFEN1);
	PyModule_AddIntConstant(m,"GPAFEN0",BCM2835_GPAFEN0);
	PyModule_AddIntConstant(m,"GPAFEN1",BCM2835_GPAFEN1);
	PyModule_AddIntConstant(m,"GPPUD",BCM2835_GPPUD);
	PyModule_AddIntConstant(m,"GPPUDCLK0",BCM2835_GPPUDCLK0);
	PyModule_AddIntConstant(m,"GPPUDCLK1",BCM2835_GPPUDCLK1);
	PyModule_AddIntConstant(m,"BCM2835_PADS_GPIO_0_27",BCM2835_PADS_GPIO_0_27);
	PyModule_AddIntConstant(m,"BCM2835_PADS_GPIO_28_45",BCM2835_PADS_GPIO_28_45);
	PyModule_AddIntConstant(m,"BCM2835_PADS_GPIO_46_53",BCM2835_PADS_GPIO_46_53);
	PyModule_AddIntConstant(m,"BCM2835_PAD_PASSWRD",BCM2835_PAD_PASSWRD);
	PyModule_AddIntConstant(m,"BCM2835_PAD_SLEW_RATE_UNLIMITED",BCM2835_PAD_SLEW_RATE_UNLIMITED);
	PyModule_AddIntConstant(m,"BCM2835_PAD_HYSTERESIS_ENABLED",BCM2835_PAD_HYSTERESIS_ENABLED);
	PyModule_AddIntConstant(m,"BCM2835_PAD_DRIVE_2mA",BCM2835_PAD_DRIVE_2mA);
	PyModule_AddIntConstant(m,"BCM2835_PAD_DRIVE_4mA",BCM2835_PAD_DRIVE_4mA);
	PyModule_AddIntConstant(m,"BCM2835_PAD_DRIVE_6mA",BCM2835_PAD_DRIVE_6mA);
	PyModule_AddIntConstant(m,"BCM2835_PAD_DRIVE_8mA",BCM2835_PAD_DRIVE_8mA);
	PyModule_AddIntConstant(m,"BCM2835_PAD_DRIVE_10mA",BCM2835_PAD_DRIVE_10mA);
	PyModule_AddIntConstant(m,"BCM2835_PAD_DRIVE_12mA",BCM2835_PAD_DRIVE_12mA);
	PyModule_AddIntConstant(m,"BCM2835_PAD_DRIVE_14mA",BCM2835_PAD_DRIVE_14mA);
	PyModule_AddIntConstant(m,"BCM2835_PAD_DRIVE_16mA",BCM2835_PAD_DRIVE_16mA);
	PyModule_AddIntConstant(m,"BCM2835_SPI0_CS",BCM2835_SPI0_CS);
	PyModule_AddIntConstant(m,"BCM2835_SPI0_FIFO",BCM2835_SPI0_FIFO);
	PyModule_AddIntConstant(m,"BCM2835_SPI0_CLK",BCM2835_SPI0_CLK);
	PyModule_AddIntConstant(m,"BCM2835_SPI0_DLEN",BCM2835_SPI0_DLEN);
	PyModule_AddIntConstant(m,"BCM2835_SPI0_LTOH",BCM2835_SPI0_LTOH);
	PyModule_AddIntConstant(m,"BCM2835_SPI0_DC",BCM2835_SPI0_DC);
	PyModule_AddIntConstant(m,"BCM2835_SPI0_CS_LEN_LONG",BCM2835_SPI0_CS_LEN_LONG);
	PyModule_AddIntConstant(m,"BCM2835_SPI0_CS_DMA_LEN",BCM2835_SPI0_CS_DMA_LEN);
	PyModule_AddIntConstant(m,"BCM2835_SPI0_CS_CSPOL2",BCM2835_SPI0_CS_CSPOL2);
	PyModule_AddIntConstant(m,"BCM2835_SPI0_CS_CSPOL1",BCM2835_SPI0_CS_CSPOL1);
	PyModule_AddIntConstant(m,"BCM2835_SPI0_CS_CSPOL0",BCM2835_SPI0_CS_CSPOL0);
	PyModule_AddIntConstant(m,"BCM2835_SPI0_CS_RXF",BCM2835_SPI0_CS_RXF);
	PyModule_AddIntConstant(m,"BCM2835_SPI0_CS_RXR",BCM2835_SPI0_CS_RXR);
	PyModule_AddIntConstant(m,"BCM2835_SPI0_CS_TXD",BCM2835_SPI0_CS_TXD);
	PyModule_AddIntConstant(m,"BCM2835_SPI0_CS_DONE",BCM2835_SPI0_CS_DONE);
	PyModule_AddIntConstant(m,"BCM2835_SPI0_CS_TE_EN",BCM2835_SPI0_CS_TE_EN);
	PyModule_AddIntConstant(m,"BCM2835_SPI0_CS_LMONO",BCM2835_SPI0_CS_LMONO);
	PyModule_AddIntConstant(m,"BCM2835_SPI0_CS_LEN",BCM2835_SPI0_CS_LEN);
	PyModule_AddIntConstant(m,"BCM2835_SPI0_CS_REN",BCM2835_SPI0_CS_REN);
	PyModule_AddIntConstant(m,"BCM2835_SPI0_CS_ADCS",BCM2835_SPI0_CS_ADCS);
	PyModule_AddIntConstant(m,"BCM2835_SPI0_CS_INTR",BCM2835_SPI0_CS_INTR);
	PyModule_AddIntConstant(m,"BCM2835_SPI0_CS_INTD",BCM2835_SPI0_CS_INTD);
	PyModule_AddIntConstant(m,"BCM2835_SPI0_CS_DMAEN",BCM2835_SPI0_CS_DMAEN);
	PyModule_AddIntConstant(m,"BCM2835_SPI0_CS_TA",BCM2835_SPI0_CS_TA);
	PyModule_AddIntConstant(m,"BCM2835_SPI0_CS_CSPOL",BCM2835_SPI0_CS_CSPOL);
	PyModule_AddIntConstant(m,"BCM2835_SPI0_CS_CLEAR",BCM2835_SPI0_CS_CLEAR);
	PyModule_AddIntConstant(m,"BCM2835_SPI0_CS_CLEAR_RX",BCM2835_SPI0_CS_CLEAR_RX);
	PyModule_AddIntConstant(m,"BCM2835_SPI0_CS_CLEAR_TX",BCM2835_SPI0_CS_CLEAR_TX);
	PyModule_AddIntConstant(m,"BCM2835_SPI0_CS_CPOL",BCM2835_SPI0_CS_CPOL);
	PyModule_AddIntConstant(m,"BCM2835_SPI0_CS_CPHA",BCM2835_SPI0_CS_CPHA);
	PyModule_AddIntConstant(m,"BCM2835_SPI0_CS_CS",BCM2835_SPI0_CS_CS);
	//PyModule_AddIntConstant(m,"",);

    // Function Select
	PyModule_AddIntConstant(m,"GPIO_FSEL_INPT",BCM2835_GPIO_FSEL_INPT);
	PyModule_AddIntConstant(m,"GPIO_FSEL_OUTP",BCM2835_GPIO_FSEL_OUTP);
	PyModule_AddIntConstant(m,"GPIO_FSEL_ALT0",BCM2835_GPIO_FSEL_ALT0);
	PyModule_AddIntConstant(m,"GPIO_FSEL_ALT1",BCM2835_GPIO_FSEL_ALT1);
	PyModule_AddIntConstant(m,"GPIO_FSEL_ALT2",BCM2835_GPIO_FSEL_ALT2);
	PyModule_AddIntConstant(m,"GPIO_FSEL_ALT3",BCM2835_GPIO_FSEL_ALT3);
	PyModule_AddIntConstant(m,"GPIO_FSEL_ALT4",BCM2835_GPIO_FSEL_ALT4);
	PyModule_AddIntConstant(m,"GPIO_FSEL_ALT5",BCM2835_GPIO_FSEL_ALT5);
	PyModule_AddIntConstant(m,"GPIO_FSEL_MASK",BCM2835_GPIO_FSEL_MASK);

	// PUD Control
	PyModule_AddIntConstant(m,"BCM2835_GPIO_PUD_OFF",BCM2835_GPIO_PUD_OFF);
	PyModule_AddIntConstant(m,"BCM2835_GPIO_PUD_DOWN",BCM2835_GPIO_PUD_DOWN);
	PyModule_AddIntConstant(m,"BCM2835_GPIO_PUD_UP",BCM2835_GPIO_PUD_UP);

	// Pad Group
	PyModule_AddIntConstant(m,"BCM2835_PAD_GROUP_GPIO_0_27",BCM2835_PAD_GROUP_GPIO_0_27);
	PyModule_AddIntConstant(m,"BCM2835_PAD_GROUP_GPIO_28_45",BCM2835_PAD_GROUP_GPIO_28_45);
	PyModule_AddIntConstant(m,"BCM2835_PAD_GROUP_GPIO_46_53",BCM2835_PAD_GROUP_GPIO_46_53);
    
	// RPiGPIOPin
	PyModule_AddIntConstant(m,"RPI_GPIO_P1_03",RPI_GPIO_P1_03);
	PyModule_AddIntConstant(m,"RPI_GPIO_P1_05",RPI_GPIO_P1_05);
	PyModule_AddIntConstant(m,"RPI_GPIO_P1_07",RPI_GPIO_P1_07);
	PyModule_AddIntConstant(m,"RPI_GPIO_P1_08",RPI_GPIO_P1_08);
	PyModule_AddIntConstant(m,"RPI_GPIO_P1_10",RPI_GPIO_P1_10);
	PyModule_AddIntConstant(m,"RPI_GPIO_P1_11",RPI_GPIO_P1_11);
	PyModule_AddIntConstant(m,"RPI_GPIO_P1_12",RPI_GPIO_P1_12);
	PyModule_AddIntConstant(m,"RPI_GPIO_P1_13",RPI_GPIO_P1_13);
	PyModule_AddIntConstant(m,"RPI_GPIO_P1_15",RPI_GPIO_P1_15);
	PyModule_AddIntConstant(m,"RPI_GPIO_P1_16",RPI_GPIO_P1_16);
	PyModule_AddIntConstant(m,"RPI_GPIO_P1_18",RPI_GPIO_P1_18);
	PyModule_AddIntConstant(m,"RPI_GPIO_P1_19",RPI_GPIO_P1_19);
	PyModule_AddIntConstant(m,"RPI_GPIO_P1_21",RPI_GPIO_P1_21);
	PyModule_AddIntConstant(m,"RPI_GPIO_P1_22",RPI_GPIO_P1_22);
	PyModule_AddIntConstant(m,"RPI_GPIO_P1_23",RPI_GPIO_P1_23);
	PyModule_AddIntConstant(m,"RPI_GPIO_P1_24",RPI_GPIO_P1_24);
	PyModule_AddIntConstant(m,"RPI_GPIO_P1_26",RPI_GPIO_P1_26);
	PyModule_AddIntConstant(m,"RPI_V2_GPIO_P1_03",RPI_V2_GPIO_P1_03);
	PyModule_AddIntConstant(m,"RPI_V2_GPIO_P1_05",RPI_V2_GPIO_P1_05);
	PyModule_AddIntConstant(m,"RPI_V2_GPIO_P1_07",RPI_V2_GPIO_P1_07);
	PyModule_AddIntConstant(m,"RPI_V2_GPIO_P1_08",RPI_V2_GPIO_P1_08);
	PyModule_AddIntConstant(m,"RPI_V2_GPIO_P1_10",RPI_V2_GPIO_P1_10);
	PyModule_AddIntConstant(m,"RPI_V2_GPIO_P1_11",RPI_V2_GPIO_P1_11);
	PyModule_AddIntConstant(m,"RPI_V2_GPIO_P1_12",RPI_V2_GPIO_P1_12);
	PyModule_AddIntConstant(m,"RPI_V2_GPIO_P1_13",RPI_V2_GPIO_P1_13);
	PyModule_AddIntConstant(m,"RPI_V2_GPIO_P1_15",RPI_V2_GPIO_P1_15);
	PyModule_AddIntConstant(m,"RPI_V2_GPIO_P1_16",RPI_V2_GPIO_P1_16);
	PyModule_AddIntConstant(m,"RPI_V2_GPIO_P1_18",RPI_V2_GPIO_P1_18);
	PyModule_AddIntConstant(m,"RPI_V2_GPIO_P1_19",RPI_V2_GPIO_P1_19);
	PyModule_AddIntConstant(m,"RPI_V2_GPIO_P1_21",RPI_V2_GPIO_P1_21);
	PyModule_AddIntConstant(m,"RPI_V2_GPIO_P1_22",RPI_V2_GPIO_P1_22);
	PyModule_AddIntConstant(m,"RPI_V2_GPIO_P1_23",RPI_V2_GPIO_P1_23);
	PyModule_AddIntConstant(m,"RPI_V2_GPIO_P1_24",RPI_V2_GPIO_P1_24);
	PyModule_AddIntConstant(m,"RPI_V2_GPIO_P1_26",RPI_V2_GPIO_P1_26);

	// Bit Order
	PyModule_AddIntConstant(m,"SPI_BIT_ORDER_LSBFIRST",BCM2835_SPI_BIT_ORDER_LSBFIRST);
	PyModule_AddIntConstant(m,"SPI_BIT_ORDER_MSBFIRST",BCM2835_SPI_BIT_ORDER_MSBFIRST);

	// SPI Mode
	PyModule_AddIntConstant(m,"SPI_MODE0",BCM2835_SPI_MODE0);
	PyModule_AddIntConstant(m,"SPI_MODE1",BCM2835_SPI_MODE1);
	PyModule_AddIntConstant(m,"SPI_MODE2",BCM2835_SPI_MODE2);
	PyModule_AddIntConstant(m,"SPI_MODE3",BCM2835_SPI_MODE3);

	// Chip Select
	PyModule_AddIntConstant(m,"SPI_CS0",BCM2835_SPI_CS0);
	PyModule_AddIntConstant(m,"SPI_CS1",BCM2835_SPI_CS1);
	PyModule_AddIntConstant(m,"SPI_CS2",BCM2835_SPI_CS2);
	PyModule_AddIntConstant(m,"SPI_CS_NONE",BCM2835_SPI_CS_NONE);

	// bcm2835SPIClockDivider
	PyModule_AddIntConstant(m,"SPI_CLOCK_DIVIDER_65536",BCM2835_SPI_CLOCK_DIVIDER_65536);
	PyModule_AddIntConstant(m,"SPI_CLOCK_DIVIDER_32768",BCM2835_SPI_CLOCK_DIVIDER_32768);
	PyModule_AddIntConstant(m,"SPI_CLOCK_DIVIDER_16384",BCM2835_SPI_CLOCK_DIVIDER_16384);
	PyModule_AddIntConstant(m,"SPI_CLOCK_DIVIDER_8192",BCM2835_SPI_CLOCK_DIVIDER_8192);
	PyModule_AddIntConstant(m,"SPI_CLOCK_DIVIDER_4096",BCM2835_SPI_CLOCK_DIVIDER_4096);
	PyModule_AddIntConstant(m,"SPI_CLOCK_DIVIDER_2048",BCM2835_SPI_CLOCK_DIVIDER_2048);
	PyModule_AddIntConstant(m,"SPI_CLOCK_DIVIDER_1024",BCM2835_SPI_CLOCK_DIVIDER_1024);
	PyModule_AddIntConstant(m,"SPI_CLOCK_DIVIDER_512",BCM2835_SPI_CLOCK_DIVIDER_512);
	PyModule_AddIntConstant(m,"SPI_CLOCK_DIVIDER_256",BCM2835_SPI_CLOCK_DIVIDER_256);
	PyModule_AddIntConstant(m,"SPI_CLOCK_DIVIDER_128",BCM2835_SPI_CLOCK_DIVIDER_128);
	PyModule_AddIntConstant(m,"SPI_CLOCK_DIVIDER_64",BCM2835_SPI_CLOCK_DIVIDER_64);
	PyModule_AddIntConstant(m,"SPI_CLOCK_DIVIDER_32",BCM2835_SPI_CLOCK_DIVIDER_32);
	PyModule_AddIntConstant(m,"SPI_CLOCK_DIVIDER_16",BCM2835_SPI_CLOCK_DIVIDER_16);
	PyModule_AddIntConstant(m,"SPI_CLOCK_DIVIDER_8",BCM2835_SPI_CLOCK_DIVIDER_8);
	PyModule_AddIntConstant(m,"SPI_CLOCK_DIVIDER_4",BCM2835_SPI_CLOCK_DIVIDER_4);
	PyModule_AddIntConstant(m,"SPI_CLOCK_DIVIDER_2",BCM2835_SPI_CLOCK_DIVIDER_2);
	PyModule_AddIntConstant(m,"SPI_CLOCK_DIVIDER_1",BCM2835_SPI_CLOCK_DIVIDER_1);

	PyBCM2835Error = PyErr_NewException("PyBCM2835.error", NULL, NULL);
    Py_INCREF(PyBCM2835Error);
    PyModule_AddObject(m, "error", PyBCM2835Error);
}
