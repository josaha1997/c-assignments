//Program to print full pyramid using *
#include<stdio.h>

//TO print pyramid pattern
int print_pattern(int height)
{
    int i, j;
	
	//Loop for rows
    for(i=1; i<=height; i++)
    {
		//Loop for printing space
        for(j=i; j<height; j++)
        {
            printf(" ");
        }
        
		//Loop for printing *
        for(j=1; j<=(2*i-1); j++)
        {
            printf("*");
        }
        
        printf("\n");
    }
}
int main()
{
    int height;
    char choice;
    do
    {
        printf("Enter height of the pyramid : ");
        scanf("%d", &height);
		
        //Validating height(integer value or not)
        if(height && height>0)
            print_pattern(height);
		
        getchar();
        getchar();
        printf("Do you want to give another input?(y/n):");
        scanf("%c",&choice);
    }while(choice=='y'||choice=='Y');
    return 0;
}
