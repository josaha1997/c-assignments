/*Write a program, which accepts a character from the user and checks 
if it is an alphabet, digit or punctuation symbol. If it is an alphabet, 
check if it is uppercase or lowercase and then change the case.*/
#include<stdio.h>
#include<stdlib.h>
#include<ctype.h>

//To check the type of the character
void check_char_type(char input)
{
	if(isdigit(input))
		printf("Numeric Value\n");
	else if(isalpha(input))
	{
		if(isupper(input))
			printf("Given input in Upper Case\n Lower case:%c\n",tolower(input));
		else if(islower(input))
			printf("Given input in Lower Case\n Upper case:%c\n",toupper(input));
	}
	else if(ispunct(input))
		printf("Given input is punctuation mark\n");
	else
		printf("Wrong input\n");
}

int main()
{
	char input;
	int choice;
	while(1)
	{
		printf("\n1.Give input\n2.Exit\nEnter your choice:");
		scanf("%d",&choice);
		getchar();
		switch(choice)
		{
			case 1:	
					printf("Enter your input:");
					scanf("%c",&input);
					check_char_type(input);
					break;
			case 2:
					exit(0);
					
			default:
					printf("Please give an input\n");
		}
	}
	return 0;
}
