//Write a recursive function to calculate power(x,y)
#include<stdio.h>
#include<stdlib.h>

//Recursive funtion to calculater power(x,y)
float calculatePower(int base,int power)
{
	if(power==0)
	    return 1;
	//For negative value of power
	else if(power<0)
	    return ((1/(float)base)*calculatePower(base,power+1));
	//For positive value of power
	else
		return (base*calculatePower(base,power-1));
}

int main()
{
	int base,power;
	printf("Enter the base(x) and power(y) to calculate x^y:");
	//Validating input(Integer value or not)
	if(!scanf("%d %d",&base,&power))
	{	
		printf("Invalid input values!!");
		exit(0);
	}
	printf("The power(x,y) is:%f",calculatePower(base,power));
	return 0;
}