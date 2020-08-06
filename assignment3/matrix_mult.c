//Read two 3x3 matrix and perform their multiplication and print the answer.
#include<stdio.h>
#include<stdlib.h>
int i,j,k;

//TO accept the elemenets of matrix
void accept_matrix(int **matrix,int row,int column)
{
	printf("Enter elements of matrix:\n");	
	for(i=0;i<row;i++)
	{
		for(j=0;j<column;j++)
		{
			scanf("\t%d",&matrix[i][j]);
			//Validating values(integer or not)
    	    if(!matrix[i][j])
    	    {
			   printf("Wrong input!");
			   exit(0);
    	    }
		}
	}
}

//To accept the row and column size
void accept_row_col(int *row,int *column)
{
	printf("\nEnter row size of the matrix:");
	scanf("%d",&*row);
	printf("\nEnter column size of the matrix:");
	scanf("%d",&*column);
	//Validating input(positive integer or not)
	if(!*row||*row<=0 || *column<=0||!*column)
	{
		printf("Please enter a valid size");
		accept_row_col(&*row,&*column);
	}
	
}

//TO print matrix elements
void print_matrix(int **matrix,int row,int column)
{
	for(i=0;i<row;i++)
	{
		for(j=0;j<column;j++)
			printf("\t%d",matrix[i][j]);
		printf("\n");	
	}
	
}

//TO multiply two matrices
void multiply_matrix(int **matrix1,int **matrix2,int **result_matrix,int row1,int column2,int col_row)
{
	printf("The final matrix is:\n");	
	for(i=0;i<row1;i++)
	{
		for(j=0;j<column2;j++)
		{
			for(k=0;k<col_row;k++)
				result_matrix[i][j]+=matrix1[i][k]*matrix2[k][j];
		}
	}

}

void main()
{
	int **matrix1,**matrix2,**result_matrix;
	int row1,row2,column1,column2;
	
	printf("Matrix 1:\n");	
	accept_row_col(&row1,&column1);
	printf("Matrix 2:\n");	
	accept_row_col(&row2,&column2);

	//Validating if column size of first matrix equals to row size of second matrix or not
	if(column1!=row2)
	{
		printf("Column size of first matrix should be equal as row of second matrix");
		exit(0);
	}

	matrix1=(int **)malloc(row1*sizeof(int));
	for(i=0;i<row1;i++)
		 matrix1[i]=(int *)malloc(column1*sizeof(int));

	
	matrix2=(int **)malloc(row2*sizeof(int));
	for(i=0;i<row2;i++)
		 matrix2[i]=(int *)malloc(column2*sizeof(int));

	result_matrix=(int **)malloc(row1*sizeof(int));
	for(i=0;i<row1;i++)
		 result_matrix[i]=(int *)malloc(column2*sizeof(int));


	accept_matrix(matrix1,row1,column1);
	accept_matrix(matrix2,row2,column2);

	multiply_matrix(matrix1,matrix2,result_matrix,row1,column2,column1);	

	print_matrix(result_matrix,row1,column2);

}
