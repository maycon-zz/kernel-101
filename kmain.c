/**
 *  kmain.c
 */

#include "kconsole.h"

void kmain(void)
{
	console_init();
	console_write_text(">>> Hack N' Roll - Kernel v0.0.1 <<<");

	return;
}