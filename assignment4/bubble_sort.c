//Accept an array from user and sort it using Bubble sort.
#include<stdio.h>
#include<stdlib.h>
int i,j;

//To sort the elements(Bubble sort)
void bubble_sort(int array[],int size)
{
	int temp;
	for(i=0;i<size-1;i++)
	{
		for(j=0;j<size-i-1;j++)
		{
			if(array[j]>array[j+1])
			{
				temp=array[j];
				array[j]=array[j+1];
				array[j+1]=temp;	
			}
		}
	}		
}

//To accept elements of the array
void accept_input(int array[],int size)
{
	printf("Enter array elements:\n");	
	for(i=0;i<size;i++)
	{
	    //Validating array elements(integer value or not)
		if(!scanf("%d",&array[i]))
		{	
			printf("ERROR!! Invalid input value!!\n");
			exit(0);
		}
	}
}

//To accept the size of the array
void accept_size(int *size)
{
	printf("Enter a valid size of the list:");
	//Validating size(positive integer value or not)
	if(!scanf("%d",&*size) || *size<=0)
	{
		getchar();		
		printf("ERROR!! Invalid input!!\n");
		accept_size(&*size);
	}
}

//To print array elements
void print_output(int array[],int size)
{
	for(i=0;i<size;i++)
	{
		printf("%d\t",array[i]);
	}
}

void main()
{
	int *array,size;
	accept_size(&size);
	array=(int *)calloc(size,sizeof(int));
	accept_input(array,size);
	bubble_sort(array,size);
	print_output(array,size);
}
