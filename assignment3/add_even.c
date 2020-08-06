/*Dynamically create an integer array of size 10, read 10 integers and
 print the sum of all even integers. Also release memory before program termination*/
#include<stdio.h>
#include<stdlib.h>
int i,j,k;

//TO accept the input from user
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
 //To accept size of the array
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

//TO add even numbers in the array
void add_even(int array[],int size)
{
	int sum=0;	
	printf("The Addition of even numbers is:");	
	for(i=0;i<size;i++)
	{
		if(array[i]%2==0)
			sum+=array[i];
	}
	printf("%d",sum);

}

void main()
{
	int *array,size;
	
	accept_size(&size);

	array=(int *)malloc(size*sizeof(int));

	accept_array(array,size);

	add_even(array,size);
	
	free(array);
}
