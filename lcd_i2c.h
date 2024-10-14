#ifndef _LCD_I2C_H
#define _LCD_I2C_H

#include <linux/module.h>
#include <linux/i2c.h>
#include <linux/cdev.h>
#include <linux/fs.h>
#include <linux/mutex.h>

/* I2C device address (replace with your device's actual address) */
#define LCD_I2C_ADDR 0x27  // Common addresses are 0x27 or 0x3F

/* LCD Command Codes */
#define LCD_CMD_CLEAR_DISPLAY     0x01
#define LCD_CMD_RETURN_HOME       0x02
#define LCD_CMD_ENTRY_MODE_SET    0x04
#define LCD_CMD_DISPLAY_CONTROL   0x08
#define LCD_CMD_CURSOR_SHIFT      0x10
#define LCD_CMD_FUNCTION_SET      0x20
#define LCD_CMD_SET_CGRAM_ADDR    0x40
#define LCD_CMD_SET_DDRAM_ADDR    0x80

/* Flags for display entry mode */
#define LCD_ENTRY_RIGHT           0x00
#define LCD_ENTRY_LEFT            0x02
#define LCD_ENTRY_SHIFT_INCREMENT 0x01
#define LCD_ENTRY_SHIFT_DECREMENT 0x00

/* Flags for display on/off control */
#define LCD_DISPLAY_ON            0x04
#define LCD_DISPLAY_OFF           0x00
#define LCD_CURSOR_ON             0x02
#define LCD_CURSOR_OFF            0x00
#define LCD_BLINK_ON              0x01
#define LCD_BLINK_OFF             0x00

/* Flags for function set */
#define LCD_8BIT_MODE             0x10
#define LCD_4BIT_MODE             0x00
#define LCD_2LINE                 0x08
#define LCD_1LINE                 0x00
#define LCD_5x10DOTS              0x04
#define LCD_5x8DOTS               0x00

/* Backlight control */
#define LCD_BACKLIGHT             0x08
#define LCD_NOBACKLIGHT           0x00

/* Bit masks for control bits */
#define En                        0x04  // Enable bit
#define Rw                        0x02  // Read/Write bit
#define Rs                        0x01  // Register select bit

/* Device name */
#define DEVICE_NAME "lcd_i2c"

/* Function prototypes */
int lcd_init_display(struct i2c_client *client);
void lcd_clear_display(struct i2c_client *client);
void lcd_write_char(struct i2c_client *client, char data);
void lcd_write_string(struct i2c_client *client, const char *str);

#endif /* _LCD_I2C_H */

