/*Read five integers from user and add them if the addition is greater than 10 divide 
the addition by 2 else divide the addition by 3 and print the answer.*/
#include<stdio.h>
#include<stdib.h>
int i=0;

//To add five input numbers
int add_five_numbers(int input[])
{
	int sum=0;
	for(i=0;i<5;i++)
		sum+=input[i];
	return sum;
}

void main()
{
	int input[5],answer;
	printf("Enter five numbers for addition:");
	for(i=0;i<5;i++)
	{
		scanf("%d",&input[i]);
		
		//Validating input(integer or not)
		if(!input[i])
		{
			   printf("Wrong input!");
			   exit(0);
		}
	}
	answer=add_five_numbers(input);
	
	//DIviding by 2 if output<10
	if(answer>10)
	{
		answer/=2;	
		printf("Final answer(sum/2 since sum>10):%d",answer);
	}
	//Dividing by 3 if output>10
	else
	{
		answer/=3;	
		printf("Final answer(sum/3 since sum<=10):%d",answer);
	}

}
