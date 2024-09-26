#include <stdio.h>
#include <stdbool.h> 


struct ClimateControl {
    float temp;
    int humidity;
    int light;
    bool fanstatus;
};


struct ClimateControl acceptClimateData(float t, int h, int l, bool f) {
    struct ClimateControl climate;
    climate.temp = t;
    climate.humidity = h;
    climate.light = l;
    climate.fanstatus = f;
    return climate;
}

void displayClimate(struct ClimateControl c) {
    printf("Temperature: %f\n", c.temp);
    printf("Humidity: %d\n", c.humidity);
    printf("Light: %d\n", c.light);
    printf("Fan Status: %s\n", c.fanstatus ? "On" : "Off");
}

int main() {

    struct ClimateControl climate = acceptClimateData(24.4, 54, 34, false);
    displayClimate(climate);

    return 0;
}



/*
Build process of C Project

g++ -Iinclude -c ./src/Greenhouse.c -o ./build/Greenhouse.o
g++ ./build/Greenhouse.o ./build/Greenhouse.o  -o ./build/output.exe
*/