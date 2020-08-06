/*Accept two complex numbers from the user (real part, imaginary part). 
Write a menu driven program to perform the following operations till the 
user selects Exit. i. ADD ii. SUBTRACT iii. MULTIPLY iv. EXIT*/
#include<stdio.h>
#include<stdlib.h>
#include<complex.h>

int main()
{
	double complex input1,input2,answer;
	float real,imaginory;
	int choice;
	while(1)
	{
		printf("\n1.Add two complex numbers"
			"\n2.Subtract two complex numbers"
			"\n3.Multiply two complex numbers"
			"\n4.Divide two complex numbers"
			"\n5.Exit"
			"\nEnter your choice:");
		scanf("%d",&choice);
		if(choice==5)
			exit(0);
		
		printf("\nEnter real part of the first number:");
		scanf("%f",&real);
		printf("Enter imaginory part of the first number:");
		scanf("%f",&imaginory);
		input1=real+imaginory*I;
		
		printf("\nEnter real part of the second number:");
		scanf("%f",&real);
		printf("Enter imaginory part of the second number:");
		scanf("%f",&imaginory);
		input2=real+imaginory*I;
			
		switch(choice)
		{
			
			case 1:
					answer=input1+input2;
					printf("The addition of the above complex numbers are %f+%fi\n",creal(answer),cimag(answer));
					break;
			case 2:
					answer=input1-input2;
					printf("The subtraction of the above complex numbers are %f+%fi\n",
													creal(answer),cimag(answer));
					break;
			case 3:
					answer=input1*input2;
					printf("The multiplication of the above complex numbers are %f+%fi\n",
															creal(answer),cimag(answer));
					break;
			case 4:
					answer=input1/input2;
					printf("The division of the above complex numbers are %f+%fi\n",creal(answer),cimag(answer));
					break;
			default:
					printf("Wrong input!!");				
		}
	}
	return 0;	
}
