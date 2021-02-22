#include <stdio.h>
#include <stdlib.h>
#include "board.h"


#ifdef OVERRIDE
#define MAIN_STARTUP_HANDLER STARTUP_HANDLER

void MAIN_STARTUP_HANDLER() {
	printf("[%s][%s]Entry (OVERRIDE HANLDER COMES HERE ^_^)\n", __FILE__, __func__);
}
#endif

int main(void)
{
	printf("[%s][%s]Entry\n", __FILE__, __func__);
#ifdef OVERRIDE
	printf("[%s][%s]MAIN_STARTUP_HANDLER start address:%p\n", __FILE__, __func__, MAIN_STARTUP_HANDLER);	
#endif
	foo();
	//print_startup_handler();
	return 0;
}

