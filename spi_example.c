/*  =========================================================================
    spi_example - An example spi linux kernel driver
    
    -------------------------------------------------------------------------
    Copyright © 2013-2014 Mariusz Ryndzionek <m.ryndzionek@a2s.pl>
    =========================================================================
*/
#include <linux/module.h>    // included for all kernel modules
#include <linux/kernel.h>    // included for KERN_INFO
#include <linux/spi/spi.h>

static int spi_example_probe(struct spi_device *spi)
{
	return 0;
}

static int spi_example_remove(struct spi_device *spi)
{
	return 0;
}

static struct spi_driver spi_example_driver = {
         .driver = {
                 .name = "spi_example",
         },
         .probe = spi_example_probe,
         .remove = spi_example_remove,
 };

module_spi_driver(spi_example_driver);

MODULE_LICENSE("GPL");
MODULE_AUTHOR("Mariusz Ryndzionek");
MODULE_DESCRIPTION("An example spi linux kernel driver");
