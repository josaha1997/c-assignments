//Find the largest number the three numbers.
#include<stdio.h>

//TO find largest number among three inputs
int findlargest(int checkval[])
{
		if(checkval[0]>checkval[1] && checkval[0]>checkval[2])
			return checkval[0];
		if(checkval[1]>checkval[0] && checkval[1]>checkval[2])
			return checkval[1];
		else
			return checkval[2];

}

//To accept three inputs
int accept(int input[])
{
	int i;
	for(i=0;i<3;i++)
	{
		printf("\nValue %d:",i+1);
		scanf("%d",&input[i]);
		
		//Input validation(integer value or not)
		if(!input[i])
	        return 0;
	}
	return 1;
}
void main()
{
	int input[3],i;
	char choice;
	do
	{
    	printf("Enter three numbers :");
		
		//If valid input display output
    	if(accept(input)!=0)
        	printf("\n%d is the largest number\n", findlargest(input));
    	getchar();
    	getchar();
    	printf("Do you want to give another input?(y/n):");
    	scanf("%c",&choice);
	}while(choice=='y'|| choice=='Y');
}
