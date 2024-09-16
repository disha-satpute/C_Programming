#include <stdio.h>
#include "../include/handler.h"
#include "../include/math.h"
#include "../include/point.h"
#include "../include/line.h"
#include "../include/person.h"

//Entry Point Function : main
int main()
{
    printf("Hello world !\n");
    displayMessage();

    addition(10,20);
    subtraction(40,20);
    multiplication(5,2);
    division(10,2);

   struct person person1 = {"Disha", 19, 97.30};

    // Print the details
    printf("Name: %s\n", person1.name);
    printf("Age: %d\n", person1.age);
    printf("Score: %.2f\n", person1.score);

  struct point p1 = {10, 20};
  struct point p2 = {30, 40};

  printf("Point 1 \n");
    getXY(p1, p2);

  struct point p3 = {50, 60};
  struct point p4 = {70, 80};

  printf("Point 2 \n");
   getXY(p3, p4);

  struct line L1={p1,p2};
  struct line L2={p3,p4};

   getLine(L1,L2);

 return 0;
}



/*
Build process of C Project

g++ -Iinclude -c ./src/handler.c -o ./build/handler.o
g++ -Iinclude -c ./src/math.c -o ./build/math.o
g++ -Iinclude -c ./src/point.c -o ./build/point.o
g++ -Iinclude -c ./src/main.c -o ./build/main.o
g++ ./build/handler.o ./build/math.o  ./build/main.o  -o ./build/output.exe
*/