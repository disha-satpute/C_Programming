#include <iostream>
using  namespace std;

//Declare function Pointer
void (*ptrFn) ();

 void show(){
 	printf("Hello Transflower using Show () \n");
 }

 void display(){
 	printf("Hello Transflower  using display ()\n");
 }

int main(int argc, char** argv) {
	printf("Hello from Main function\n");	
	int * ptr;
	int * ptr_node=NULL;	
				//show() compile time linking (early binding)
				//show() is resolved at compile time  (before creating exe file)
	show();		//invoking reusable function from main
				//static linking function		
	ptrFn=show;		
	ptrFn();	//dynamic linking (late binding)
				//function will be resolved at runtime (when exe file code is under execution)
	
	return 0;
}