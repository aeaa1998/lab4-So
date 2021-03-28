#include <linux/init.h>
#include <linux/kernel.h>
#include <linux/module.h>
#include <linux/list.h>

int simple_init(void)
{
    printk(KERN_INFO "Loading Module\nOdioestaclase");
    return 0;
}
void simple_exit()
{
    printk(KERN_INFO "Removing Module\nOdioestaclase");
}

module_init(simple_init);
module_exit(simple_exit);
MODULE_LICENSE("GPL");
MODULE_DESCRIPTION("<PorFavorQueTermine>");
MODULE_AUTHOR("<Augusto Alonso>");
