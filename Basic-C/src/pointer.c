//IDE Tool
//Integrated Developers Enviornment
//Examples of IDE Tool
//Eclipse,  NetbeanS, 
// Visual Studio,
// jupiter notebook
//anaconda

#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h> 

// variables declared outside of main function are called  global variables
int runs = 670;

void draw() {

    int timingcount = 6700;

    printf("runs = %d", runs);
}

void display() {
    printf("runs = %d", runs);
}

int main()
{

    //Local variables are variables which are declared within  function scope
    //normal variable stores value
    bool status = false;
    char ch = 'T';
    int  marks = 98;
    float  result=97.5;

    //pointer variable stores address of another variable
    int* ptr1 = &marks;
    int* ptr2 = &marks;

    int * ptr = (int *) malloc(sizeof(int));
    if (ptr == NULL) {
        printf("Memory allocation failed!\n");
        return 1;
    }

    // Assign a value to the allocated memory
    *ptr = 30;
    printf("Value pointed to by ptr: %d\n", *ptr); // Outputs: 30

     //What is the real meaning of Pointer ?
    //it is a variable which stores address of another variable
    printf("runs = %d", runs);

    printf("\n marks= %d", marks);
    printf("\n data pointed by ptr1= %d", *ptr1);
    printf("\n data pointed by ptr2= %d", *ptr2);
    printf("\n data pointed by ptr= %d", *ptr);


    printf("\n Welome to Transflower\n");

    free(ptr);

}

/*
Build process of C Project

g++ -Iinclude -c ./src/handler.c -o ./build/handler.o
g++ -Iinclude -c ./src/main.c -o ./build/main.o
g++ ./build/handler.o ./build/main.o  -o ./build/output.exe
*/