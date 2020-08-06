//Write a recursive function to calculate Fibonacci series
#include<stdio.h>
#include<stdlib.h>

//Recursive funtion to calculater Fibonacci series
int fibonacci(int termNumber)
{
	//First two terms are 1
	if(termNumber==1 || termNumber==2)
		return 1;
	return (fibonacci(termNumber-1)+fibonacci(termNumber-2));
}

int main()
{
	int numberOfTerms,i=1;
	printf("Enter number of terms you want to print of fibonacci series:");
	//Validating input(Positve Integer value or not)
	if(!scanf("%d",&numberOfTerms) || numberOfTerms<=0)
	{	
		printf("Invalid input value!!");
		exit(0);
	}
	printf("The fibonacci series is:\n");
	while(i<=numberOfTerms)
		printf("%d\t",fibonacci(i++));
	return 0;
}