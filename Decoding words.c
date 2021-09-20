/*Decoding words*/
#include<stdio.h>
void main()
{
	//variable declaration
	int number1, number2, number3;
	printf("Enter any three numbers fron 1-26\n");
	
	//Taking inputs
	scanf("%d%d%d", &number1, &number2, &number3);
	
	//Result
	printf("The word is %c%c%c", number1+95, number2+95, number3+95);
}
