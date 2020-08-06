/*read a number if the number is equal to 10 or 20 or 30 divide it by 2, 
if the number is equal to 40 or 50 divide it by 3, else divide it by 4. Make use of switch.*/
#include<stdio.h>

void main()
{
	int input;
	printf("Enter a number (within 10,20,30,40,50 or greater than 50):");
	scanf("%d",&input);
	
	//Checking for valid input
	if(input && input>0 && input<=50 && input%10==0 || input>50)
	{
		switch(input)
		{
			case 10:
			case 20:
			case 30:	printf("Final output(input in 10,20 or 30):%d",input/2);
					break;
			case 40:
			case 50:	printf("Final output(input in 40 or 50):%d",input/3);
					break;

			default:	printf("Final output(input >50):%d",input/4);
		}
	}
	else
		printf("Wrong input given!!!");

}
