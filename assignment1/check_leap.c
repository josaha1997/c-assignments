//Check whether a year is a leap year.
#include<stdio.h>

//To check if year is leap or not
char *checkleap(int year)
{
	//Year validation
	if(!year || year<=0)
        return NULL;
	if(year%4==0 && (year%100!=0 || year%400==0))
		return "Leap Year";
	else
		return "Not a Leap Year";
}

void main()
{
	int check_year;
	char choice;
	do
	{
    	printf("Enter a year to check it is leap year or not:");
    	scanf("%d",&check_year);
		
		//If valid year print output
    	if( checkleap(check_year)!=NULL)
        	printf("\n%s\n", checkleap(check_year));
		getchar();
    	getchar();
    	printf("Do you wnt to give another input?(y/n):");
    	scanf("%c",&choice);
	}while(choice=='y'|| choice=='Y');
}
