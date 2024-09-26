#pragma once

struct ClimateControl {
    float temp;
    int humidity;
    int light;
    bool fanstatus;
};

struct ClimateControl acceptClimateData(float t, int h, int l, bool f) ;
void displayClimate(struct ClimateControl c) ;

void TurnFanOn();
void TurnFanOff();
void getTemp();
void setTemp();