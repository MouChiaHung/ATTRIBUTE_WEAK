#include <stdio.h>
#include <stdlib.h>
#include "board.h"

__attribute__((weak)) void startup_handler_dummy(void) {
	//while(1) {};
	printf("[%s][%s]Entry (NO OVERRIDE HANLDER COMES HERE)\n", __FILE__, __func__);
}

void startup_handler_dummy_impl(void) __attribute__((weak, alias("startup_handler_dummy")));

__attribute__((weak)) void startup_handler(void) {
	startup_handler_dummy_impl();
}

__attribute__((weak)) void foo() {
	printf("[%s][%s]Entry\n", __FILE__, __func__);
	printf("[%s][%s]startup_handler start address:%p\n", __FILE__, __func__, startup_handler);
	printf("[%s][%s]Going to execute startup_handler\n", __FILE__, __func__);
	startup_handler();
}

void print_startup_handler() {
	printf("[%s][%s]startup_handler start address:%p\n", __FILE__, __func__, startup_handler);	
}
