//Alphabets
#include<stdio.h>
void main()
{
	int number;//Variable declaration
	printf("Enter a number from 1-26\n");
	
	//Input from user
	scanf("%d", &number);
	
	//Printing
	printf("%c", 96+number);
}
