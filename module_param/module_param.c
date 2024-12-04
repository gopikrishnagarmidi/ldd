#include<linux/kernel.h>
#include<linux/module_param.h>
#include<linux/init.h>
#include<linux/module.h>

int temp=10;
module_param(temp,int,0644);

static int moduleparam_init(void)
{
	printk("module installed successfully\n");
	printk("temp=%d",temp);
	return 0;
}

static int moduleparam_exit(void)
{
	printk("module unloaded successfully\n");
}

module_init(moduleparam_init);
module_exit(moduleparam_exit);

MODULE_AUTHOR("Gopikrishna");
MODULE_VERSION("GPL2");
