#ifndef BLINK_LEDS_H
#define BLINK_LEDS_H

#define IDLE_TIME 25

extern void initial_setup(void);
extern void blink(int8*);
extern void peripheral_segments(int8*, int1);

#endif
