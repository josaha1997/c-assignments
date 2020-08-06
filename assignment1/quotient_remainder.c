// Compute quotient and remainder of two number “a” and “b” if b is non-zero.
#include<stdio.h>
void main()
{
	int divisor,dividend;
	char choice;
	do
	{
    	printf("Enter dividend:");
    	scanf("%d",&dividend);
    	printf("\nEnter divisor:");
    	scanf("%d",&divisor);
		
		//Validating divisor(whether denominator is 0 also input is integer or not)
    	if(divisor!=0 && divisor && dividend)
    	{
    		printf("Quotient:%d",dividend/divisor);
    		printf("Remainder:%d",dividend%divisor);
    	}
		
	    getchar();
        getchar();
        printf("Do you want to give another input?(y/n):");
        scanf("%c",&choice);
    }while(choice=='y'||choice=='Y');
    return 0;
}
