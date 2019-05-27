#include <linux/module.h>    // included for all kernel modules
#include <linux/kernel.h>    // included for KERN_INFO
#include <linux/init.h>      // included for __init and __exit macros

MODULE_LICENSE("MIT");
MODULE_AUTHOR("MohsenSaremi");
MODULE_DESCRIPTION("A Simple Hello World module");
MODULE_VERSION("0.01");

static int __init hello_init(void)
{
    printk(KERN_INFO "Hello world!\n");
    return 0;    // Non-zero return means that the module couldn't be loaded.
}

static void __exit hello_cleanup(void)
{
    printk(KERN_INFO "Goodbye world!.\n");
}

module_init(hello_init);
module_exit(hello_cleanup);