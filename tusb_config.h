#ifndef TSUB_CONFIG_H
#define TSUB_CONFIG_H

#define CFG_TUD_ENABLED 1
#define CFG_TUD_HID   1 // to make it human interface device (i.e. a keyboard instead of mass storage device or something else)
#define CFG_TUD_HID_EP_BUFSIZE  64 //maximum buffersize for RP2040
#define BOARD_TUD_RHPORT  0


#endif /* TSUB_CONFIG_H */
