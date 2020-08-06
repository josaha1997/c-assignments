//Read an integer from the user and check whether the number is even or odd.
#include<stdio.h>

//To Check whether the number is even or not
char *checkeven(int number)
{
	//Checking input is integer value
	if(!number)
	    return NULL;
	if(number%2==0)
		return "even";
	else
		return "odd";
}

void main()
{
	int check_value;
	char choice;
	do
	{
    	printf("Enter a number to check it is even or odd:");
    	scanf("%d",&check_value);
		
		//If input in valid display output
    	if(check_even(check_value)!=NULL)
    	    printf("\n%s\n", checkeven(check_value));
    	getchar();
    	getchar();
    	printf("Do you want to give another input?(y/n):");
    	scanf("%c",&choice);
	}while(choice=='y'|| choice=='Y');
}
