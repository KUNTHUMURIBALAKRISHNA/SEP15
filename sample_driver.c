#include<linux/module.h>

static int __init hello_world_init(void)
{
	printk(KERN_INFO"hello world started");
	return 0;
}
module_init(hello_world_init);

static void __exit hello_world_exit(void)
{
	printk(KERN_INFO"hello world ended");
}
module_exit(hello_world_exit);


