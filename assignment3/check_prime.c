//Check if a number is prime or composite.
#include<stdio.h>
#include<math.h>
#include<ctype.h>

//To check number if prime or not
char *check_prime(int input)
{
	int i;
	
	//Validating input(integer value or not)
	if(!input)
		return NULL;
	if(input==1)
		return "neither prime nor composite";
	for(i=2;i<=sqrt(input);i++)
	{
		if(input%i==0)
			return "Composite";
	}		
	return "Prime";
}

int main()
{
	int input;
	char choice;
	do
	{
		printf("Enter any number:");
		scanf("%d",&input);
		if(check_prime(input)!=NULL)
			printf("The given number is %s\n",check_prime(input));
		getchar();
		getchar();
		printf("Do you want to give another input?(y/n):");
		scanf("%c",&choice);
	}while(choice=='y'||choice=='Y');
}
