/*Calculation for simple intrest*/
#include<stdio.h>
void main()
{
//Variable Declaration
int Principle;
double Time, Rate_of_intrest, simple_interest;

//Reading the values by user
printf("Enter principle value\n");
scanf("%d", &Principle);

printf("Enter time\n");
scanf("%lf", &Time);

printf("Enter rate of intrest\n");
scanf("%lf", &Rate_of_intrest);

//Calculations
simple_interest = Principle*1.0* Time* Rate_of_intrest/100;

//Result
printf("The simple interest for the above data is : %lf", simple_interest);
}
