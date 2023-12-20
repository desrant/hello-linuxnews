/*
* Hello World Program (LinuxNews)
*/
#include <linux/module.h> 
#include <linux/printk.h>
#include <linux/init.h>
#include <linux/kernel.h>
#include <linux/stat.h>
#include <linux/moduleparam.h>

MODULE_AUTHOR("Saurav IIT KGP");
MODULE_DESCRIPTION("This program says Hello World");

static char *mystring = "Hello World";
module_param(mystring, charp, 0000);
MODULE_PARM_DESC(mystring, "A character string that says Hello World");

static int __init start(void)
{
pr_info("%s\n", mystring);
return 0;
}


static void __exit terminate(void)
{
pr_info("Goodbye world.\n");
}

module_init(start);
module_exit(terminate);
MODULE_LICENSE("GPL");
