//To accept elements of array
extern void acceptArray(int array[],int size)
{
	int i;
	printf("\nEnter elements of the array:\n");
	for(i=0;i<size;i++)
	{
		//Validating array elements(integer values or not)
		if(!scanf("%d",&array[i]))
		{
			printf("Invalid input!!\n");
			exit(0);
		}
	}
}

//To accept size of the array
extern void acceptSize(int *size)
{
	printf("\nEnter the size of the array:");
	//Validatng size(Positive integer value or not)
	if(!scanf("%d",size) || size<=0)
	{
		printf("Invalid input !!\n");
		exit(0);
	}
}
