#include "space_age.h"

float age(planet_t planet, int64_t seconds){
    float year = seconds / 31557600.00; 
    double planet_time_factor_wrt_earth[] = {
        0.2408467,
        0.61519726,
        1.0,    
        1.8808158,
        11.862615,
        29.447498,
        84.016846,
        164.79132
        };

    switch(planet){
        case MERCURY:
            return year/planet_time_factor_wrt_earth[MERCURY];
        case VENUS:
            return year/planet_time_factor_wrt_earth[VENUS];
        case EARTH:
            return year/planet_time_factor_wrt_earth[EARTH];
        case MARS:
            return year/planet_time_factor_wrt_earth[MARS];
        case JUPITER:
            return year/planet_time_factor_wrt_earth[JUPITER];
        case SATURN:
            return year/planet_time_factor_wrt_earth[SATURN];
        case URANUS:
            return year/planet_time_factor_wrt_earth[URANUS];
        case NEPTUNE:
            return year/planet_time_factor_wrt_earth[NEPTUNE];
        default:
            return -1;    
    }
}