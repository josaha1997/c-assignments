// Accept n number, stored it in array and print all numbers in reverse order.
#include<stdio.h>
#include<stdlib.h>
#include"array.h"


//To print array elements in reverse order
void printReverseArray(int array[],int size)
{
	int i;
	printf("\nThe array in reverse order is :\n");
	for(i=size-1;i>=0;i--)
		printf("%3d",array[i]);
	printf("\n");
}

int main()
{
	int *array,size;
	
	//External function from array.h to accept size and array elements
	acceptSize(&size);
	array=(int *)malloc(size*sizeof(int));
	acceptArray(array,size);
	
	printReverseArray(array,size);
	return 0;
}
