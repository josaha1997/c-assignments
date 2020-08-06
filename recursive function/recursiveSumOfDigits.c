//Write a recursive function to calculate sum of digits of a number
#include<stdio.h>
#include<stdlib.h>

//Recursive funtion to add digits of a number
int addDigitsOfaNumber(int input)
{
	if(input<=0)
	    return 0;
	return ((input%10)+addDigitsOfaNumber(input/10));
}

int main()
{
	int input;
	printf("Enter a number to calculate sum of its digits:");
	//Validating input(Integer value or not)
	if(!scanf("%d",&input))
	{	
		printf("Invalid input!!");
		exit(0);
	}
	printf("The addition of digits of the number is:%d",addDigitsOfaNumber(input));
	return 0;
}