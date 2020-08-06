//Write a program to create a simple calculator which can perform ADDITION, SUBTRACTION, MULTIPLY and DIVIDE till user select EXIT
#include<stdio.h>
#include<stdlib.h>
int main()
{
	int input1,input2,choice;
	while(1)
	{
		printf("\n1:Add \n2:Subtract \n3:Divide \n4:Multiply \n5:Exit\nEnter your choice");
		scanf("%d",&choice);
		if(choice==5)
			exit(0);
		printf("Enter two numbers:");
		//Validating input value(integer or not)
		if(!scanf("%d %d",&input1,&input2))
		{
			printf("Invalid input value!")
			exit(0);
		}
		switch(choice)
		{
			case 1:
					printf("Addition:%d",input1+input2);
					break;
			case 2:
					printf("Subtraction:%d",input1-input2);
					break;
			case 3:
					//Validating if divisor is 0
					if(input2==0)
					{
						printf(Invalid divisor!);
						exit(0);
					}
					printf("Division:%d",input1/input2);	
					break;
			case 4:
					printf("Multiplication:%d",input1*input2);
					break;
			default:
					printf("invalid");
		}
	}
	return 0;
}
