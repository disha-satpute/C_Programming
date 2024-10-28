#include <stdio.h>

int (*ptrArithmaticOperation) (int, int);

int add(int op1, int op2)
{
	return op1 + op2;
}

int subtract(int op1, int op2)
{
	return op1 - op2;
}

int multiply(int op1, int op2)
{
 	return op1 * op2;
}
	
int divide(int op1, int op2)
 {
	return op1 / op2;
 }

int main(int argc, char** argv) {
	printf("Function Pointer for invoking arithmatic Operations\n");	
	ptrArithmaticOperation=multiply;		
	int result=ptrArithmaticOperation(8,6);	 			 
	printf("Result = %d", result);
	return 0;
}