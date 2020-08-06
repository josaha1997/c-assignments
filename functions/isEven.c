//Read an n integers from the user and check whether the numbers are even or odd.
#include<stdio.h>
#include<stdlib.h>

//To Check whether the number is even or not
int isEven(int i_number)
{
	//Return 1 if number is even else return 0
	if(i_number%2==0)
		return 1;
	else
		return 0;
}

int main()
{
	int inputValue,noOfInputs;
    	
    	printf("Enter total number of inputs:");
    	//Validating if input is positive integer
    	if(!scanf("%d",&noOfInputs)||noOfInputs<=0)
   	{
   		printf("Invalid input!!");
   		exit(0);
   	}
   	while(noOfInputs)
   	{
	    	printf("\nEnter a number to check it is even or odd:");
	    	//Validating if input is integer
	    	if(!scanf("%d",&inputValue))
	    	{
	    	    printf("\nInvalid input");
	    	    exit(0);
	    	}
	    	if(isEven(inputValue)==1)
	    		printf("\nThe input is even");
	    	else
	    		printf("\nThe input is odd");
	    	noOfInputs--;
	}   
	return 0; 	
}
