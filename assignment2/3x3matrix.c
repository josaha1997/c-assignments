//Read a 3x3 matrix from user and print the addition of each row and each column.
#include<stdio.h>
#include<stdlib.h>
int i=0,j=0,row_sum=0,column_sum=0;

//To accept the elementsof the matrix
void accept_matrix(int array[][3])
{
	printf("Enter a 3x3 matrix:\n");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			scanf("%d",&array[i][j]);
			//Validating values(integer or not)
    	    if(!array[i][j])
    	    {
			   printf("Wrong input!");
			   exit(0);
    	    }
		}
	}
}

//TO add rows and columns of the matrix
void add_matrix_row_column(int matrix[][3])
{
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			row_sum+=matrix[i][j];
			column_sum+=matrix[j][i];
		}
		printf("\nSum of %d row is %d",i,row_sum);
		printf("\nSum of %d column is %d",i,column_sum);
	}	
}

void main()
{
	int matrix[3][3];
	accept_matrix(matrix);	
	add_matrix_row_column(matrix);	
}
