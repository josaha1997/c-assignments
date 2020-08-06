#include<stdio.h>
#include<stdlib.h>
int i=0,j=0,k;

//TP print the pattern
void pattern(int size)
{
	//Loop for the rows
	for(i=0;i<size;i++)
	{
		k=i;
		//Loop for column
		for(j=0;j<2*i+1;j++)
		{
			if(j>i)
				printf("\t%d",k--);
			else			
				printf("\t%d",j+1);
		}
		printf("\n");
	}
}

void main()
{
	int size;
	printf("Enter the size of the pattern:");
	scanf("%d",&size);
	
	//Validating values(positive integer or not)
	if(!size || size<0)
	{
	   printf("Wrong input!");
	   exit(0);
	}
	pattern(size);
}

