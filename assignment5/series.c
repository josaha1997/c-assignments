// Write a program to accept real number x and integer n and calculate the sum of first n terms of the series 1/x  + 2 / x^2  + 3/ x^3 + ……
#include<stdio.h>
#include<stdlib.h>
#include<math.h>

//To print the series
float series(int input,int size)
{
	int i;
	float sum=0.0;
	for(i=1;i<=size;i++)
		sum+=((float)i/pow(input,i));
	return sum;
}

int accept(int *input,int *size)
{
	printf("Enter number of terms:");
	//Validating the size of the series ( positive integer or not)
	if(!scanf("%d",size) || *size<0)
	{
		printf("Invalide size");
		return 0;
	}
	printf("Enter value of x:");
	//Validating the value (integer or not)
	if(!scanf("%d",input) )
	{
		printf("Invalid Input");
		getchar();
		return 0;
	}
	return;
}
int main()
{
	int input,size;
	char ch;
	do
	{
		if(accept(&input,&size)!=0)
			printf("The sum is: %f\n",series(input,size));
		getchar();
		printf("Do you want to try again?(y/n):");
		scanf("%c",&ch);
		
	}while(ch=='y' || ch=='Y');
	return 0;	
}
