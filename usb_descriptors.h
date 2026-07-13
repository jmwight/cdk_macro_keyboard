#ifndef USB_DESCRIPTOR_H
#define USB_DESCRIPTOR_H

const uint8_t *tud_descriptor_device_cb(void);
uint8_t const *tud_descriptor_device_qualifier_cb(void);
uint8_t const *tud_descriptor_other_speed_configuration_cb(uint8_t index);
uint8_t const *tud_descriptor_configuration_cb(uint8_t index);
uint16_t const *tud_descriptor_string_cb(uint8_t index, uint16_t langid);

#endif // USB_DESCRIPTOR_H
