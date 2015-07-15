#include <linux/init.h>
#include <linux/module.h>

MODULE_AUTHOR("Feng Mingliang");
MODULE_LICENSE("Dual BSD/GPL");

static int book_init(void)
{
	printk("init!\n");
	return 0 ;
}


static int book_exit(void)
{
	printk("exit!\n");
	return 0 ;
}

module_init(book_init);
module_exit(book_exit);
