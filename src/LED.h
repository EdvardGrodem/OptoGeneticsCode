#ifndef _LED_H
#define _LED_H

#include <Arduino.h>

typedef enum LEDstate_e{
    OFFSET,
    LED_HIGH,
    LED_LOW,
    DONE
} LEDstate;

/*Class for holding LED phase parameters
intensities_p, periods_p, offset_p, tInterpulse_p, tPulse_p must all be pointers to PROGMEM
*/
class LED {
    public:
    LED();
    
    void init(const uint8_t * intensities_p, const uint8_t * periods_p, 
            const uint16_t * offset_p, const uint16_t * tInterpulse_p,
            const uint16_t * tPulse_p,
            const uint8_t phasesNumb_p);
    //Increments LED phase time and retuns true if new phase and and updates intensity
    void updateGetIntensity(uint8_t & intensity_p); 
    void setCalibrationValue(uint8_t caliLED1, uint8_t caliLED2);
    
    uint8_t getIntensity(uint8_t indexLED); 

    private:
    const uint8_t * intensities PROGMEM;
    const uint8_t * periods PROGMEM;
    const uint16_t * offset PROGMEM;
    const uint16_t * tInterpulse PROGMEM;
    const uint16_t * tPulse PROGMEM;

    uint8_t phase;
    uint16_t phaseTime;
    uint8_t phasesNumb;
    uint8_t caliNumb[2] = {0, 0};
    uint8_t periodCount;

    LEDstate state;
    
};
#endif
