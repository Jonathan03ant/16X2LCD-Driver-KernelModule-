#include "lcd_i2c.h"

#include <linux/init.h>
#include <linux/kernel.h>
#include <linux/module.h>
#include <linux/i2c.h>
#include <linux/cdev.h>
#include <linux/fs.h>
#include <linux/uaccess.h>
#include <linux/mutex.h>
#include <linux/delay.h>




























												



													/* Module Information */

MODULE_LICENSE("GPL");
MODULE_AUTHOR("Jonathan Antennaie");
MODULE_DESCRIPTION("I2c Driver for a 16x2 LCD device");
MODULE_VERSION("J_1.0");

