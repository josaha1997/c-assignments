#include<stdio.h>
#include<stdlib.h>
#include<ctype.h>
int alphaCounter,digitCounter,punctCounter;
int checkTypeOfChar(char input)
{
	//Checking if alphabet
	if(isalpha(input))
	{
		alphaCounter++;
		return 1;
	}
	//Checking if digit
	else if(isdigit(input))
	{
		digitCounter++;
		return 2;
	}
	//Checking if special symbol
	else if(ispunct(input))
	{
		punctCounter++;
		return 3;
	}
	else
		return 0; 
}
 

int main()
{
	char inputChar;
	//Loop until user enters EOF
	do
	{
		printf("Enter a character:");
		scanf("%c",&inputChar);
		getchar();
		if(checkTypeOfChar(inputChar)==1)
			printf("The input is Alphabet\n");
		else if(checkTypeOfChar(inputChar)==2)
			printf("The input is Digit\n");
		else if(checkTypeOfChar(inputChar)==3)
			printf("The input is a special symbol\n");
		else
			printf("Invalid input\n");

	}while(inputChar!=EOF);
	printf("Total alphabets:%d\nTotal Digits:%d\nTotal special symbols:%d\n",alphaCounter,digitCounter,punctCounter);
	return 0;
}
