//C Program to Print All the Repeated Numbers with Frequency in an Array
#include<stdio.h>
#include<stdlib.h>
#include"array.h"
int count;
//To accept array elements with frequency maintained
void acceptArrayWithFrequency(int **array,int size)
{
	int i=0,temp,flag;
	printf("\nEnter elements of the array:\n");
	while(size!=0)
	{
		flag=0;
		//Validating array elements(integer values or not)
		if(!scanf("%d",&temp))
		{
			printf("Invalid input!!\n");
			exit(0);
		}
		for(i=0;i<=count;i++)
		{
			if(array[i][0]==temp)
			{
				array[i][1]++;
				flag=1;
			}
			
		}	
		if(flag==0)
		{
			array[count][0]=temp;	
			array[count][1]++;	
			count++;
				
		}
		size--;
	}
}

//To print array elements  with its frequency
void printArrayWithFrequency(int **array,int size)
{
	int i;
	for(i=0;i<count;i++)
		printf("%d(%d)\t",array[i][0],array[i][1]);		
	printf("\n");
}

int main()
{
	int **array,size,i;
	
	//External function from array.h to accept size
	acceptSize(&size);

	array=(int **)malloc(size*sizeof(int));
	for(i=0;i<size;i++)
	{
		array[i]=(int*)malloc(2*sizeof(int));
		array[i][1]=0;
	}	
	acceptArrayWithFrequency(array,size);
	printArrayWithFrequency(array,size);
	return 0;
}
