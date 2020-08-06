/* Write a menu driven program to perform the following operations 
till the user selects Exit. Accept appropriate data for each option. 
Use standard library functions from math.h i. Sine ii. Cosine iii. log iv. ex v. Square Root vi. Exit*/
#include<stdio.h>
#include<math.h>
#include<stdlib.h>
int main()
{
	int choice;
	float input;
	while(1)
	{
		printf("\n1.sine \n2.cosine \n3.log \n4.exp \n5.square root \n6.exit \nEnter choice:");
		scanf("%d",&choice);
		if(choice==6)
			exit(0);
		printf("\nEnter Input:");
		//Validating input(integer or not)
		if(!scanf("%f",&input))
		{
			printf("Invalid input");
			exit(0);
		}
		switch(ch)
		{
			case 1:
					printf("%f",sin(input));
					break;
			case 2:
					printf("%f",cos(deg));
					break;
			case 3:		
					printf("%f",log(x));
					break;
			case 4:
					printf("%f",exp(x));
					break;
			case 5:
					printf("%f",sqrt(x));
					break;
			default:
					printf("Invalid input");
		}
	}
	return 0;
}	

