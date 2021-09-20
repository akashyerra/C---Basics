#include<stdio.h>
void main()
{
	//Variable Declaration
	int number1, number2, answer;
	
	//Taking Input
	printf("Know the sum of n even natural numbers\n");
	printf("Enter the value of n\n");
	scanf("%d", &number1);
	
	//Calculations
	number2 = number1+1;
	answer= number1*number2;
	
	//Result
	printf("sum of first %d even natural numbers is: %d", number1, answer);
}
