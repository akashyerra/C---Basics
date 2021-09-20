/*Sum of first n natural numbers*/
#include<stdio.h>
void main()

{
	//Variable declaration
	int number1, number2, product, answer;
	
	//Reading the values given by the user
	printf("Enter the n value\n");
	scanf("%d", &number1);
	
	//Calculations
	number2=number1+1;
	number2*=number1;
	product=number2;
	answer=number2/2;
	
	//Printing the results
	printf("sum of first %d natural numbers is : %d",number1, answer);
}
