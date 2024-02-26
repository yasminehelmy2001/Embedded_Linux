#include "add.h"
#include "sub.h"
#include "multiply.h"
#include "divide.h"
#include "modulus.h"
#include <stdio.h>

void main (void)
{
	float x,y,result;
	char oper;
	printf("Enter the operation: \n");
	scanf("%c",&oper);
	printf("Enter the 2 Numbers: \n");
	scanf("%f %f",&x,&y);
	switch(oper)
	{
		case '+':
		result=add(x,y);
		break;
		case '-':
		result=sub(x,y);
		break;
		case '*':
		result=multiply(x,y);
		break;
		case '/':
		result=divide(x,y);
		break;
		case '%':
		result=modulus(x,y);
		break;
		default:
		printf("Operation not correct!");
		break;
	}
	printf("Result is: %f", result); 
}
