#ifndef MAIN_H

#define MAIN_H

#include "pico/stdlib.h"
#include "pico/time.h"
//#include "hardware/gpio.h"
#include "tusb.h"


#define ON  0
#define OFF 1

#define MAIN_LED 13

void loop();
void read_line(int lines);
void read_ro();
void tcm(int print_num);
void fnl();

#endif /* MAIN_H */
