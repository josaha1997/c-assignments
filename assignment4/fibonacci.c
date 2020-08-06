//Print Fibonacci series.
#include<stdio.h>
#include<stdlib.h>

//To calculate fibonacci series
void fibonacci(int input)
{
	int fib0=0,fib1=1,fib2=1;
	printf("%d\t",fib0);	
	while(input--!=0)
	{
		printf("%d\t",fib2);			
		fib2=fib0+fib1;
		fib0=fib1;
		fib1=fib2;	
	}
	
}

void main()
{
	int input;	
	printf("Enter a size uptill which you want a fibonacci series:");
	//Validating size of series (integer value or not)
	if(!scanf("%d",&input) || input<0)
	{
		printf("ERROR !! Invalid input!!\n");
		exit(0);
	}
	printf("The Fibonacci series  of size %d is\n",input);
	fibonacci(input-1);
}
