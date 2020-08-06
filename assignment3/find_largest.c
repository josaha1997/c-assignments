//Accept n number from user(Use dynamic memory allocation) and Find the largest number from it.
#include<stdio.h>
#include<stdlib.h>
int i,j,k;

//To accept elements of array
void accept_array(int array[],int size)
{
	printf("Enter elements of array:\n");	
	for(i=0;i<size;i++)
	{
		scanf("\t%d",&array[i]);
		//Validating values(integer or not)
		if(!array[i])
		{
		   printf("Wrong input!");
		   exit(0);
		}
	}
}

//TO accept size of the array
void accept_size(int *size)
{
	printf("\nEnter size of the array:");
	scanf("%d",&*size);
	//Validating size(positive integer or not)
	if(*size<=0 || !*size)
	{
		printf("Please enter a valid size");
		accept_size(&*size);
	}
	
}

//TO find larget value among given inputs
void find_largest(int array[],int size)
{
	int max=array[0];	
	printf("The largest number is:");	
	for(i=1;i<size;i++)
	{
		if(array[i]>max)
			max=array[i];
	}
	printf("%d",max);

}

void main()
{
	int *array,size;
	
	accept_size(&size);

	array=(int *)malloc(size*sizeof(int));

	accept_array(array,size);

	find_largest(array,size);	
}
