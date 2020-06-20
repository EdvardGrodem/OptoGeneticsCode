/* This is an auto generated file.
Generated using ../Matlab/FlashExperiment.m */

#ifndef _EXPERIMENT_CONFIG_H
#define _EXPERIMENT_CONFIG_H

#include "LED.h"
#include <Arduino.h>

#define NUMB_WELL_LEDS 2
#define NUMB_WELLS 96

const uint8_t amplitudes[NUMB_WELL_LEDS][96] PROGMEM = {
{
   0,  20,   0,  20,   0,  20,   0,  20,   0,  20,   0,  20,  20,   0,  20,   0,  20,   0,  20,   0,  20,   0,  20,   0,   0,  20,   0,  20,   0,  20,   0,  20,   0,  20,   0,  20,  20,   0,  20,   0,  20,   0,  20,   0,  20,   0,  20,   0,   0,  20,   0,  20,   0,  20,   0,  20,   0,  20,   0,  20,  20,   0,  20,   0,  20,   0,  20,   0,  20,   0,  20,   0,   0,  20,   0,  20,   0,  20,   0,  20,   0,  20,   0,  20,  20,   0,  20,   0,  20,   0,  20,   0,  20,   0,  20,   0,
},
{
   0,  20,   0,  20,   0,  20,   0,  20,   0,  20,   0,  20,  20,   0,  20,   0,  20,   0,  20,   0,  20,   0,  20,   0,   0,  20,   0,  20,   0,  20,   0,  20,   0,  20,   0,  20,  20,   0,  20,   0,  20,   0,  20,   0,  20,   0,  20,   0,   0,  20,   0,  20,   0,  20,   0,  20,   0,  20,   0,  20,  20,   0,  20,   0,  20,   0,  20,   0,  20,   0,  20,   0,   0,  20,   0,  20,   0,  20,   0,  20,   0,  20,   0,  20,  20,   0,  20,   0,  20,   0,  20,   0,  20,   0,  20,   0,
},
};

const uint16_t pulseNumbs[NUMB_WELL_LEDS][96] PROGMEM = {
{
     5,     5,     5,     5,     5,     5,     5,     5,     5,     5,     5,     5,     5,     5,     5,     5,     5,     5,     5,     5,     5,     5,     5,     5,     5,     5,     5,     5,     5,     5,     5,     5,     5,     5,     5,     5,     5,     5,     5,     5,     5,     5,     5,     5,     5,     5,     5,     5,     5,     5,     5,     5,     5,     5,     5,     5,     5,     5,     5,     5,     5,     5,     5,     5,     5,     5,     5,     5,     5,     5,     5,     5,     5,     5,     5,     5,     5,     5,     5,     5,     5,     5,     5,     5,     5,     5,     5,     5,     5,     5,     5,     5,     5,     5,     5,     5,
},
{
     5,     5,     5,     5,     5,     5,     5,     5,     5,     5,     5,     5,     5,     5,     5,     5,     5,     5,     5,     5,     5,     5,     5,     5,     5,     5,     5,     5,     5,     5,     5,     5,     5,     5,     5,     5,     5,     5,     5,     5,     5,     5,     5,     5,     5,     5,     5,     5,     5,     5,     5,     5,     5,     5,     5,     5,     5,     5,     5,     5,     5,     5,     5,     5,     5,     5,     5,     5,     5,     5,     5,     5,     5,     5,     5,     5,     5,     5,     5,     5,     5,     5,     5,     5,     5,     5,     5,     5,     5,     5,     5,     5,     5,     5,     5,     5,
},
};

const uint16_t pusleStartTimes[NUMB_WELL_LEDS][96] PROGMEM = {
{
     2,     2,     2,     2,     2,     2,     2,     2,     2,     2,     2,     2,     2,     2,     2,     2,     2,     2,     2,     2,     2,     2,     2,     2,     2,     2,     2,     2,     2,     2,     2,     2,     2,     2,     2,     2,     2,     2,     2,     2,     2,     2,     2,     2,     2,     2,     2,     2,     2,     2,     2,     2,     2,     2,     2,     2,     2,     2,     2,     2,     2,     2,     2,     2,     2,     2,     2,     2,     2,     2,     2,     2,     2,     2,     2,     2,     2,     2,     2,     2,     2,     2,     2,     2,     2,     2,     2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
},
{
     2,     2,     2,     2,     2,     2,     2,     2,     2,     2,     2,     2,     2,     2,     2,     2,     2,     2,     2,     2,     2,     2,     2,     2,     2,     2,     2,     2,     2,     2,     2,     2,     2,     2,     2,     2,     2,     2,     2,     2,     2,     2,     2,     2,     2,     2,     2,     2,     2,     2,     2,     2,     2,     2,     2,     2,     2,     2,     2,     2,     2,     2,     2,     2,     2,     2,     2,     2,     2,     2,     2,     2,     2,     2,     2,     2,     2,     2,     2,     2,     2,     2,     2,     2,     2,     2,     2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
},
};

const uint16_t pulseHighTimes[NUMB_WELL_LEDS][96] PROGMEM = {
{
    10,    10,    10,    10,    10,    10,    10,    10,    10,    10,    10,    10,    10,    10,    10,    10,    10,    10,    10,    10,    10,    10,    10,    10,    10,    10,    10,    10,    10,    10,    10,    10,    10,    10,    10,    10,    10,    10,    10,    10,    10,    10,    10,    10,    10,    10,    10,    10,    10,    10,    10,    10,    10,    10,    10,    10,    10,    10,    10,    10,    10,    10,    10,    10,    10,    10,    10,    10,    10,    10,    10,    10,    10,    10,    10,    10,    10,    10,    10,    10,    10,    10,    10,    10,    10,    10,    10,    10,    10,    10,    10,    10,    10,    10,    10,    10,
},
{
    10,    10,    10,    10,    10,    10,    10,    10,    10,    10,    10,    10,    10,    10,    10,    10,    10,    10,    10,    10,    10,    10,    10,    10,    10,    10,    10,    10,    10,    10,    10,    10,    10,    10,    10,    10,    10,    10,    10,    10,    10,    10,    10,    10,    10,    10,    10,    10,    10,    10,    10,    10,    10,    10,    10,    10,    10,    10,    10,    10,    10,    10,    10,    10,    10,    10,    10,    10,    10,    10,    10,    10,    10,    10,    10,    10,    10,    10,    10,    10,    10,    10,    10,    10,    10,    10,    10,    10,    10,    10,    10,    10,    10,    10,    10,    10,
},
};

const uint16_t pulseLowTimes[NUMB_WELL_LEDS][96] PROGMEM = {
{
     1,     1,     1,     1,     1,     1,     1,     1,     1,     1,     1,     1,     1,     1,     1,     1,     1,     1,     1,     1,     1,     1,     1,     1,     1,     1,     1,     1,     1,     1,     1,     1,     1,     1,     1,     1,     1,     1,     1,     1,     1,     1,     1,     1,     1,     1,     1,     1,     1,     1,     1,     1,     1,     1,     1,     1,     1,     1,     1,     1,     1,     1,     1,     1,     1,     1,     1,     1,     1,     1,     1,     1,     1,     1,     1,     1,     1,     1,     1,     1,     1,     1,     1,     1,     1,     1,     1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
},
{
     1,     1,     1,     1,     1,     1,     1,     1,     1,     1,     1,     1,     1,     1,     1,     1,     1,     1,     1,     1,     1,     1,     1,     1,     1,     1,     1,     1,     1,     1,     1,     1,     1,     1,     1,     1,     1,     1,     1,     1,     1,     1,     1,     1,     1,     1,     1,     1,     1,     1,     1,     1,     1,     1,     1,     1,     1,     1,     1,     1,     1,     1,     1,     1,     1,     1,     1,     1,     1,     1,     1,     1,     1,     1,     1,     1,     1,     1,     1,     1,     1,     1,     1,     1,     1,     1,     1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
},
};

const uint16_t subpulseHighTimes[NUMB_WELL_LEDS][96] PROGMEM = {
{
    10,    10,    10,    10,    10,    10,    10,    10,    10,    10,    10,    10,    10,    10,    10,    10,    10,    10,    10,    10,    10,    10,    10,    10,    10,    10,    10,    10,    10,    10,    10,    10,    10,    10,    10,    10,    10,    10,    10,    10,    10,    10,    10,    10,    10,    10,    10,    10,    10,    10,    10,    10,    10,    10,    10,    10,    10,    10,    10,    10,    10,    10,    10,    10,    10,    10,    10,    10,    10,    10,    10,    10,    10,    10,    10,    10,    10,    10,    10,    10,    10,    10,    10,    10,    10,    10,    10,    10,    10,    10,    10,    10,    10,    10,    10,    10,
},
{
    10,    10,    10,    10,    10,    10,    10,    10,    10,    10,    10,    10,    10,    10,    10,    10,    10,    10,    10,    10,    10,    10,    10,    10,    10,    10,    10,    10,    10,    10,    10,    10,    10,    10,    10,    10,    10,    10,    10,    10,    10,    10,    10,    10,    10,    10,    10,    10,    10,    10,    10,    10,    10,    10,    10,    10,    10,    10,    10,    10,    10,    10,    10,    10,    10,    10,    10,    10,    10,    10,    10,    10,    10,    10,    10,    10,    10,    10,    10,    10,    10,    10,    10,    10,    10,    10,    10,    10,    10,    10,    10,    10,    10,    10,    10,    10,
},
};

const uint16_t subpulseLowTimes[NUMB_WELL_LEDS][96] PROGMEM = {
{
    10,    10,    10,    10,    10,    10,    10,    10,    10,    10,    10,    10,    10,    10,    10,    10,    10,    10,    10,    10,    10,    10,    10,    10,    10,    10,    10,    10,    10,    10,    10,    10,    10,    10,    10,    10,    10,    10,    10,    10,    10,    10,    10,    10,    10,    10,    10,    10,    10,    10,    10,    10,    10,    10,    10,    10,    10,    10,    10,    10,    10,    10,    10,    10,    10,    10,    10,    10,    10,    10,    10,    10,    10,    10,    10,    10,    10,    10,    10,    10,    10,    10,    10,    10,    10,    10,    10,    10,    10,    10,    10,    10,    10,    10,    10,    10,
},
{
    10,    10,    10,    10,    10,    10,    10,    10,    10,    10,    10,    10,    10,    10,    10,    10,    10,    10,    10,    10,    10,    10,    10,    10,    10,    10,    10,    10,    10,    10,    10,    10,    10,    10,    10,    10,    10,    10,    10,    10,    10,    10,    10,    10,    10,    10,    10,    10,    10,    10,    10,    10,    10,    10,    10,    10,    10,    10,    10,    10,    10,    10,    10,    10,    10,    10,    10,    10,    10,    10,    10,    10,    10,    10,    10,    10,    10,    10,    10,    10,    10,    10,    10,    10,    10,    10,    10,    10,    10,    10,    10,    10,    10,    10,    10,    10,
},
};

#endif //_EXPERIMENT_CONFIG_H 
