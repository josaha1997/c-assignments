//Read a 2x2 matrix from user and print the addition of each row
#include<stdio.h>
#include<stdlib.h>

int i,j,row_sum,column_sum;

//To accept matrix of dimension 2x2
void accept_matrix(int array[][2])
{
	printf("Enter a 2x2 matrix:\n");
	for(i=0;i<2;i++)
	{
		for(j=0;j<2;j++)
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

//To add rows and columns
void add_matrix_row_column(int matrix[][2])
{
	for(i=0;i<2;i++)
	{
		for(j=0;j<2;j++)
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
	int matrix[2][2];
	accept_matrix(matrix);	
	add_matrix_row_column(matrix);	
}
