#ifndef _BOARD_H_
#define _BOARD_H_

#define STARTUP_HANDLER startup_handler //to export symbol

__attribute__((weak)) void foo();
void print_startup_handler();

#endif
