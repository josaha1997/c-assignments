/*Write a menu driven program to check whether a number is even, odd, prime, palindrome, armstrong, perfect*/
#include<stdio.h>
#include<stdlib.h>
#include<ctype.h>
#include<math.h>
//Function to check if even number
int isEven(int input)
{
	//Return 1 if number is even else return 0
	if(input%2==0)
		return 1;
	else
		return 0;
}

//Function to check if prime number
int isPrime(int input)
{
	int i;
	for(i=2;i<=sqrt(input);i++)
	{
		if(input%i==0)
			return 0;
	}		
	return 1;
}

//Function to check if palindrome or not
int isPalindrome(int input)
{
	int remainder=0,tempInput=input;
	while(tempInput!=0)
	{
		remainder=(remainder*10)+(tempInput%10);
		tempInput/=10;
	}
	if(remainder==input)
		return 1;
	return 0;
}

//Function to check if perfect or not
int isPerfect(int input)
{
	int i,sumOfDivisor=1;
	for(i=2;i<input;i++)
	{
		if(input%i==0)
			sumOfDivisor+=i;
	}
	if(input==sumOfDivisor)
		return 1;
	return 0;
}

//Function to check if armstrong or not
int isArmstrong(int input)
{
	int sumOfCubeOfDigits=0,tempInput=input;
	while(tempInput!=0)
	{
		sumOfCubeOfDigits+=(pow(tempInput%10,3));
		tempInput/=10;
	}
	if(sumOfCubeOfDigits==input)
		return 1;
	return 0;
}

int main()
{
	int input,choice;
	char *string="IT IS A PRIME NUMBER";
	while(1)
	{
		printf("\n1.Check Even\n2.Check Odd\n3.Check Prime\n4.Check Palindrome\n5.Check Perfect\n6.Check Armstrong\n7.Exit\nEnter your choice:");
		scanf("%d",&choice);
		if(choice==7)
			exit(0);
		printf("Enter a integer:");
		//Validating if positive integer value or not
		if(!scanf("%d",&input) || input<0)
		{
			printf("Invalid input!!");
			exit(0);
		}
		switch(choice)
		{
			case 1:
					if(isEven(input))
						printf("The input is even number\n");
					else
						printf("The inputn is not even number\n");
					break;
			case 2:
					if(isEven(input)==0)
						printf("The input is odd number\n");
					else
						printf("The input is not an odd  number\n");
					break;
			case 3:
					if(isPrime(input))
						printf("%s\n",tolower(string));
					else	
						printf("The input is composite number\n");
					break;
			case 4:
					if(isPalindrome(input))
						printf("The input is a palindrome\n");
					else
						printf("The input is not a palindrome\n");
					break;
			case 5:
					if(isPerfect(input))
						printf("The input is a Perfect number\n");
					else
						printf("The number is not a perfect number\n");
					break;
			case 6:
					if(isArmstrong(input))
						printf("The input is an armstrong number\n");
					else
						printf("The input is not an armstrong number\n");
					break;
			default:
					printf("Invalid input\n");
		}
	}
}