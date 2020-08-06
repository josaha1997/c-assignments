/*read, a number from user if the number if number of between 100 and 200 divide 
it by 3 if the result is less than 50 print small number, if it is greater than 50 print \
“not so big number”. If the input number if between 200 and 300 divide it by 2 if 
the result is less than 110 print the result else divide the result by 5 and print it. 
If the input is greater than 300 print very big number*/
#include<stdio.h>
#include<stdlib.h>

//To check the number according to condition
int check_number(int input)
{
	int ans;	
	if(input>100 && input<200)
	{
		if((input/3)<50)
			printf("Small number");
		else
			printf("not so big number");
	}
	else if(input>200 && input<300)
	{
		ans=input/2;		
		if(ans<110)
			printf("Final result:%d",ans);
		else
			printf("Final result:%d",ans/5);
	}
	else if(input>300)
		printf("Very big number");
	else
		printf("Wrong input!!");
}

void main()
{
	int input;
	printf("Enter any number greater than 100:");
	scanf("%d",&input);
	//Validating value(greater than 100 integer or not)
	if(!input || input<100)
	{
	   printf("Wrong input!");
	   exit(0);
	}
	check_number(input);
}

