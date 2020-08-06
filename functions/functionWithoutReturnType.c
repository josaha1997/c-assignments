#include<stdio.h>
#include<math.h>

//Fucntion without return type
checkDefaultReturnType(float i_input)
{
		
	//if(i_input==3)
	//	return "a" ;
	return i_input;	
}

main()
{
	int temp;
	temp=checkDefaultReturnType(2.8765);
	//Checkinhg if return value is equal to integer part of argumenmt.If yes then return type is integer else float
	if(temp==checkDefaultReturnType(2.8765))
		printf("Return type is integer %d\n",temp);
	else
		printf("Return type is float %f\n",checkDefaultReturnType(2.8765));
	/*if(checkDefaultReturnType(3))
		printf("Return type is character %c\n",checkDefaultReturnType(3));
	else
		printf("Return type is void\n");*/
}

