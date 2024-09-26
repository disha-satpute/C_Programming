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

void turnFanOn(struct ClimateControl *climate) {
    climate->fanstatus = true;
    printf("Fan is turned ON\n");
}

void turnFanOff(struct ClimateControl *climate) {
    climate->fanstatus = false;
    printf("Fan is turned OFF\n");
}

float getTemperature(struct ClimateControl climate) {
    return climate.temp;
}

void setTemperature(struct ClimateControl *climate, float newTemp) {
    climate->temp = newTemp;
    printf("Temperature set to: %f\n", climate->temp);
}