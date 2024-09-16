#include <stdio.h>
#include "../include/math.h"

int main(){


    addition(10,20);
    subtraction(40,20);
    multiplication(5,2);
    division(10,2);


    return 0;
}

/* Executing Commands -
*****************************************************************
g++ -Iinclude -c ./src/math.c -o ./build/math.o
g++ -Iinclude -c ./src/main.c -o ./build/main.o
g++ ./build/math.o ./build/main.o -o ./build/result.exe

*******************************************************************
*/