/*  =========================================================================
    i2c_example - An example i2c linux kernel driver
    
    -------------------------------------------------------------------------
    Copyright © 2013-2014 Mariusz Ryndzionek <m.ryndzionek@a2s.pl>
    =========================================================================
*/
#include <linux/module.h>    // included for all kernel modules
#include <linux/kernel.h>    // included for KERN_INFO
#include <linux/i2c.h>

static int i2c_example_probe(struct i2c_client *client,
                              const struct i2c_device_id *idp)
{
	return 0;
}

static int i2c_example_remove(struct i2c_client *client)
{
	return 0;
}

static const struct i2c_device_id i2c_example_id[] = {
        { "i2c_example", 0 },
        { }
};
MODULE_DEVICE_TABLE(i2c, i2c_example_id);

static struct i2c_driver i2c_example_driver = {
         .driver = {
                 .name = "i2c_example",
         },
         .probe = i2c_example_probe,
         .remove = i2c_example_remove,
         .id_table = i2c_example_id,
 };

module_i2c_driver(i2c_example_driver);

MODULE_LICENSE("GPL");
MODULE_AUTHOR("Mariusz Ryndzionek");
MODULE_DESCRIPTION("An example i2c linux kernel driver");
