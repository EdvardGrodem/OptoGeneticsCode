#ifndef _LED_H
#define _LED_H

#include <Arduino.h>

//Class for holding LED step parameters
class LED {
 public:
    LED(const uint8_t * intensities_p, const uint16_t * durations_p, const uint8_t phasesNumb_p);

    //Increments local time and retuns true if new phase with new intensity
    bool updateGetIntensity(uint8_t & intensity_p); 
private:
    const  uint8_t * intensities;
    const uint16_t * durations;

    uint8_t phase;
    uint16_t phaseTime;
    uint8_t phasesNumb;
};


#endif
