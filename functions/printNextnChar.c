#include<stdio.h>
#include<stdlib.h>

//To print next n characters
void printNextChars(char inputChar,int noOfNextChar)
{
	int i;
	printf("Next %d charcaters are:\n",noOfNextChar);
	for(i=0;i<noOfNextChar;i++)
		printf("%5c",++inputChar);
	printf("\n");
}

int main()
{
	char inputChar;
	int noOfNextChar;
	
	printf("Enter a character:");
	scanf("%c",&inputChar);
	printf("Enter number of next characters you want to print:");
	//Validating if positive integer value or not
	if(!scanf("%d",&noOfNextChar)||noOfNextChar<=0)
	{
		printf("Invalid input!");
		exit(0);
	}
	printNextChars(inputChar,noOfNextChar);
	return 0;
}
