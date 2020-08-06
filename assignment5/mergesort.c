//Write a program to merge two sorted arrays into a third array such that the third array is also in the sorted order. 
#include<stdio.h>
#include<stdlib.h>
#include<ctype.h>

int i=0,j=0;

void accept(int array[],int size)					//To accept the values in array
{	
	printf("Enter elements of the array");
	for(i=0;i<size;i++)
	{
		if(!scanf("%d",&array[i]))					//Validating array elements(integer or not)
		{
			printf("Enter a valid input\n");
			getchar();
			accept(array,size);
		}
	}
}

void accept_size(int *size)
{
	do
	{
		if(*size<=0 || isdigit(*size)!=0)			//Validating size (positive integer or not)
			printf("\n(Note:The size you enter should be a valid number)");
			
		printf("\nEnter size of the list/array:");		//Accepting the size of first array
		scanf("%d",&*size);
		getchar();
	}while(*size<=0 || isdigit(*size)!=0);
}

void merge(int array[],int low,int high,int mid)	//To merge the sorted arrays into third array
{
	int *temp_array1,*temp_array2;
	int size1=mid-low+1,size2=high-mid;

	temp_array1=(int *)malloc((size1)*sizeof(int));	//Temperory arrays to store 2 halves of the original array 
	temp_array2=(int *)malloc((size2)*sizeof(int));

	for(i=0;i<size1;i++)
		temp_array1[i]=array[low+i];

	for(i=0;i<size2;i++)
		temp_array2[i]=array[mid+1+i];

	i=0,j=0;
	int k=low;										//Index starting from low in the original array
	while(i<size1 && j<size2)
	{		
		if(temp_array1[i]<=temp_array2[j])
		{	
			array[k]=temp_array1[i];				//Putting element of first array into third array if it is less then element
			i++;									//of second array	
		}
		else
		{	
			array[k]=temp_array2[j];				//Putting element of second array into third array if it is less then element
			j++;									//of first array
		}
		k++;
	}
	
	while(i<size1)									//Putting the remaining elements of first array into third array 
	{												//(if any left)
		array[k]=temp_array1[i];
		i++;
		k++;
	}

	while(j<size2)									//Putting the remaining elements of second array into third array
	{												//(if any left)
		array[k]=temp_array2[j];
		j++;
		k++;	
	}

	free(temp_array1);
	free(temp_array2);
}


void merge_sort(int array[],int low,int high)		//Function to divide the array and sort and merge it again
{
	
	
	if(low<high)									//For low=high only one element exists
	{
		int mid=(low+high)/2;						//dividing the array into 2 equal parts	
		merge_sort(array,low,mid);					//Sort the first half
		merge_sort(array,mid+1,high);				//Sorting the other half
		merge(array,low,high,mid);					//function call to sort and merge
	}
}


void print(int array[],int size)					//To print the elements of array
{	
	printf("\nThe merged acsending sorted array elements are: ");	
	for(i=0;i<size;i++)
		printf("%d\t",array[i]);			
}

void main()
{
	int *array,size;
	
	accept_size(&size);								//Calling function to accept size of array 
	
	array=(int *)malloc(size*sizeof(int));			//Dynamic allocation of array 

	accept(array,size);								//Calling function to accept elements in array 
	
	merge_sort(array,0,size-1);						//Calling function for sorting
	print(array,size);								//Printing the elements of array		
	
}
