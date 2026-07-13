#ifndef MAIN_H

#define MAIN_H

#include "pico/stdlib.h"
#include "pico/time.h"
//#include "hardware/gpio.h"
#include "tusb_config.h"
#include "tusb.h"
#include "usb_descriptors.h"
#include "usb_hid_key_map.h"


#define ON  0
#define OFF 1

#define MAIN_LED 13

void board_init();
void loop();
void read_line(int lines);
void read_ro();
void tcm(int print_num);
void fnl();
void send_key(char c);



// define statements for keys






#endif /* MAIN_H */
