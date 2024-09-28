#include "../include/ClimateControl.h"
#include <stdio.h>

int main() {

    struct ClimateControl climate = acceptClimateData(24.4, 54, 34, false);
    displayClimate(climate);

    return 0;
}


/*
Build process of C Project

g++ -Iinclude -c ./src/ClimateControl.c -o ./build/ClimateControl.o
g++ -Iinclude -c ./src/main.c -o ./build/main.o
g++ ./build/ClimateControl.o ./build/main.o -o ./build/output.exe

*/