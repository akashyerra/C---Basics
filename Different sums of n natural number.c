/* Different Sums of first n natural numbers*/
#include<stdio.h>
void main()

{
	//Variable declaration
	int number1, number2, product, even, odd;
	
	//Reading the values given by the user
	printf("Enter the n value\n");
	scanf("%d", &number1);
	
	//Calculations
	number2=number1+1;
	number2*=number1;
	product=number2;
	product/=2;
	even= number2;
	odd= number1*number1;
	
	
	//Printing the results
	printf("sum of first %d natural numbers is : %d\n",number1, product);
	printf("sum of first %d even natural numbers is: %d\n", number1, even);
	printf("sum of first %d odd natural numbers is: %d", number1, odd);
}
