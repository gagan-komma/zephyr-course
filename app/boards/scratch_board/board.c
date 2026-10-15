#include <zephyr/init.h>
#include <zephyr/sys/printk.h>

static int scratch_board_init(void)
{
	printk("Board Initialized\n");
	return 0;
}

SYS_INIT(scratch_board_init, APPLICATION, 0);
