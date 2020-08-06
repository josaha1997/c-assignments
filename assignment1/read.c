// Program to read an integer, float, double, long double, character from user and print
#include<stdio.h>
void main()
{
	int intval;
	float fval;
	double dval;
	long double ldval;
	char cval;

	printf("Enter character value:");
	scanf("%c",&cval);	
	printf("Enter integer value:");
	scanf("%d",&intval);
	printf("Enter float value:");
	scanf("%f",&fval);
	printf("Enter double value:");
	scanf("%lf",&dval);
	printf("Enter long double value:");
	scanf("%ld",&ldval);
	printf("\nInteger value: %d",intval);
	printf("\nFloat value: %f",fval);
	printf("\nDouble value: %lf",dval);
	printf("\nLong Double value: %ld",ldval);
	printf("\nCharacter value: %c",cval);
}
