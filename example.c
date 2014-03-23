/*  =========================================================================
    example - An example linux kernel driver
    
    -------------------------------------------------------------------------
    Copyright © 2013-2014 Mariusz Ryndzionek <m.ryndzionek@a2s.pl>
    =========================================================================
*/
#include <linux/module.h>    // included for all kernel modules
#include <linux/kernel.h>    // included for KERN_INFO
#include <linux/init.h>      // included for __init and __exit macros

MODULE_LICENSE("GPL");
MODULE_AUTHOR("Mariusz Ryndzionek");
MODULE_DESCRIPTION("An example linux kernel driver");

static int __init example_init(void)
{
    printk(KERN_INFO "Initializing module: example\n");
    return 0;    // Non-zero return means that the module couldn't be loaded.
}

static void __exit example_cleanup(void)
{
    printk(KERN_INFO "Cleaning up module: example\n");
}

module_init(example_init);
module_exit(example_cleanup);
