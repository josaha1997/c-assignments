//Write a recursive function to calculate GCD of two numbers
#include<stdio.h>
#include<stdlib.h>

//Recursive funtion to find GCD of two numbers
int calculateGCD(int firstInput,int secondInput)
{
	int remainder=firstInput%secondInput;
	//If divisor is 0 then dividend itself is the greatest common divisor
	if(secondInput==0)
	    return firstInput;
	//If remainder becomes zero means the dividend becomes GCD
	if(remainder==0)
		return secondInput;
	return (calculateGCD(secondInput,remainder));
}

int main()
{
	int firstInput,secondInput;
	printf("Enter two numbers for calculating GCD:");
	//Validating input values(Integer value or not)
	if(!scanf("%d %d",&firstInput,&secondInput))
	{	
		printf("Invalid input values!!");
		exit(0);
	}
	if(firstInput>secondInput)
		printf("The GCD of given numbers is:%d",calculateGCD(firstInput,secondInput));
	else if(firstInput<secondInput)
		printf("The GCD of given numbers is:%d",calculateGCD(secondInput,firstInput));
	//If both the inputs are same then the input itself is the GCD
	else
		printf("The GCD is given numbers is %d",firstInput);
	return 0;
}