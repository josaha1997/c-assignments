//Find Second largest elements from an array.
#include<stdio.h>
#include<stdlib.h>
#include"array.h"

//To find second largest element
int printSecondLargest(int array[],int size)
{
	int i,j,max,temp;
	for(i=0;i<2;i++)
	{
		max=i;
		for(j=i+1;j<size;j++)
		{
			if(array[max]<array[j])
				max=j;
		}
		temp=array[i];
		array[i]=array[max];
		array[max]=temp;
	}
	return array[1];
}
int main()
{
	int *array,size;
	
	//External function from array.h to accept size and array elements
	acceptSize(&size);	
	array=(int *)malloc(size*sizeof(int));
	acceptArray(array,size);
	
	printf("Second Largest ELement of the array is %d\n",printSecondLargest(array,size));
	return 0;
}

