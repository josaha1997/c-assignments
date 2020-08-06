// Program to read the string “Hello World” using and print it. (Does it work?)
#include<stdio.h>
void main()
{
	char string[100];	
	printf("Enter a string:");
	scanf ("%[^\n]%*c", string);
	puts(string);
}
