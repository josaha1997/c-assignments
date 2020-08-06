//Find factorial of a number.
#include<stdio.h>
#include<stdlib.h>

//To calculate factorial of a given number
int factorial(int input)
{
	int fact=1;
	//Factorial=1 form 0 and 1
	if(input==0 || input==1)
		input=0;	
	while(input!=0)
	{
		fact*=input--;
	}
	return fact;
}

void main()
{
	int input;	
	printf("Enter a number of which you want to find factorial of:");
	//Validating input (integer or not)
	if(!scanf("%d",&input) || input<0)
	{
		printf("Error!! Invalid input\n");
		exit(0);
	}
	printf("The Factorial of %d is %d\n",input,factorial(input));
}
