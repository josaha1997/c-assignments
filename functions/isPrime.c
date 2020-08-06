//Check if numbers are prime or composite.
#include<stdio.h>
#include<math.h>
#include<stdlib.h>

//To check number if prime or not
int isPrime(int input)
{
	int i;
	if(input==1)
		return 0;
	for(i=2;i<=sqrt(input);i++)
	{
		if(input%i==0)
			return 2;
	}		
	return 1;
}

int main()
{
	int input,noOfInputs;
	printf("Enter no of inputs:");
	//Validating input(positive integer value or not)
	if(!scanf("%d",&noOfInputs) || noOfInputs<=0)
	{
		printf("Invalid input");
		exit(0);
	}
	while(noOfInputs)
	{
		printf("Enter a number to check prime or not:");
		//Validating input(integer value or not)
		if(!scanf("%d",&input))
		{
			printf("Invalid input");
			exit(0);
		}
		else if (isPrime(input)==0)
			printf("The given number is neither prime nor composite\n");
		else if (isPrime(input)==1)
			printf("The given number is prime\n");
		else 
			printf("The given number is composite\n");
		noOfInputs--;
	}
	return 0;
}
