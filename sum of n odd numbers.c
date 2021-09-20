/*Sum of first n odd natural numbers*/
#include<stdio.h>
void main()
{
	//Variable declaration
	int number1, answer;
	
	printf("Know the sum of n odd natural numbers\n");
	
	//Reading the values given by the user
	printf("Enter the value of n\n");
	scanf("%d", &number1);
	
	//Calculations
	answer= number1*number1;
	
	//Printing the results
	printf("sum of first %d odd natural numbers is: %d", number1, answer);	
}
