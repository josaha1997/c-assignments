//Write a recursive function to calculate frist 10 number of the series a(n)=3 for n=1,2 and a(n)=2*a(n-1)+3*a(n-2) for n>2
#include<stdio.h>
#include<stdlib.h>

//Recursive funtion to calculate first 10 numbers of given recursive equation
int calculateNextTerm(int termNumber)
{
	if(termNumber==1 || termNumber==2)
	    return 3;
	return (2*calculateNextTerm(termNumber-1)+3*calculateNextTerm(termNumber-2));
}

int main()
{
	int i=1;
	printf("The first ten numbers of the recursive equation a(n)=3 for n=1,2 and a(n)=2*a(n-1)+3*a(n-2) for n>2 are:\n" );
	//Loop for first 10 terms
	while(i<=10)
		printf("%d\t",calculateNextTerm(i++));
	return 0;
}