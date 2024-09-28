#include "../include/ClimateControl.h"
#include <stdio.h>


struct ClimateControl acceptClimateData(float t, int h, int l, bool f) {
    struct ClimateControl climate;
    climate.temp = t;
    climate.humidity = h;
    climate.light = l;
    climate.fanstatus = f;
    return climate;
}

void displayClimate(struct ClimateControl c) {

    printf("Temperature: %0.2f\n", c.temp);
    printf("Humidity: %d\n", c.humidity);
    printf("Light: %d\n", c.light);
    printf("Fan Status: %s\n", c.fanstatus ? "On" : "Off");
}

