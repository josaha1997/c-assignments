//Read an integer from the user and check whether the number is positive or negative.
#include<stdio.h>

//To check number is positive or negative
char *checksign(int number)
{
	//Input validation(integer or not)
	if(!number)
	    return NULL;
	if(number<0)
		return "negative";
	else
		return "positive";
}

void main()
{
	int check_value;
	char choice;
	do
	{
    	printf("Enter a number to check it is positive or negative:");
    	scanf("%d",&check_value);
		
		//If valid input display output
    	if(checksign(check_value)!=NULL)
    	    printf("%s", checksign(check_value));
		getchar();
    	getchar();
    	printf("Do you want to give another input?(y/n):");
    	scanf("%c",&choice);
	}while(choice=='y'|| choice=='Y');
}
