//C program to check whether number is palindrome or not. (Accept number as integer not string).

#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int i;

//To accept the input from user
void accept(int *number)
{
	printf("\nEnter the number:");
	scanf("%d",&*number);
	//Validating input(positive integer or not)
	if(!*number || *number<=0)
	{
		printf("Please enter a valid number");
		accept(&*number);
	}	
}

//To check ifthe number is palindrome or not
void check_palindrome(int number)
{
	int temp=number,remainder,temp1=0;
	//Check if remainder after dividing by 10 is equal to priginal number or not
	while(temp!=0)
	{
		remainder=temp%10;		
		temp=temp/10;	
		temp1=temp1*10+remainder;			
	}
	if(number==temp1)
		printf("The number is palindrome");
	else
		printf("The number is not a palindrome");

}

void main()
{
	int input;
	
	accept(&input);

	check_palindrome(input);	
}
