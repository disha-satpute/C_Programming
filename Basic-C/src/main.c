#include <stdio.h>
#include "../include/handler.h"
#include "../include/person.h"

//Entry Point Function : main
int main()
{
    printf("Hello world !\n");
    displayMessage();

   struct person person1 = {"Disha Satpute", 19, 97.30};
   struct person person2 = {"Ishwari Kale", 24, 60.56};

    // Print the details
    printf("Name: %s\n", person1.name);
    printf("Age: %d\n", person1.age);
    printf("Score: %.2f\n", person1.score);

    printf("Name: %s\n", person2.name);
    printf("Age: %d\n", person2.age);
    printf("Score: %.2f\n", person2.score);
 return 0;
}



/*
Build process of C Project

g++ -Iinclude -c ./src/handler.c -o ./build/handler.o
g++ -Iinclude -c ./src/main.c -o ./build/main.o
g++ ./build/handler.o ./build/main.o  -o ./build/output.exe
*/