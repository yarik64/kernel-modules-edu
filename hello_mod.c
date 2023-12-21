// hello_mod.c


#include <linux/module.h>

int init_mdoule(void)
{
	printk(KERN_INFO "Hello World im loaded");
}

void cleanup_module(void)
{
	printk(KERN_INFO "GOOD BYE World im unloaded");
}

MODULE_LICENSE("GPL");
