#include <stdio.h>

#include "../include/point.h"
#include "../include/line.h"


//Entry Point Function : main
int main()
{


  struct point p1 = {10, 20};
  struct point p2 = {30, 40};

  printf("Point 1 \n");
    getXY(p1, p2);

  struct line L1={p1,p2};

   getLine(L1);

 return 0;
}



/*           Build process of C Project
*********************************************************************************

g++ -Iinclude -c ./src/point.c -o ./build/point.o
g++ -Iinclude -c ./src/line.c -o ./build/line.o
g++ -Iinclude -c ./src/main.c -o ./build/main.o
g++ ./build/point.o ./build/line.o  ./build/main.o  -o ./build/output.exe

*********************************************************************************
*/