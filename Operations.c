// Operations
#include<stdio.h>
void main()
{
	int number1=29, number2=78; //variable declaration
	
	printf("number1 = %d, number2 = %d\n",number1,number2); 
	
	printf("sum: %i\n",number1+number2); /*Arithmetic Operator(+) */
	
	printf("Difference: %i\n", number1-number2); /*Arithmetic Operator(-) */
	
	printf("Product: %i\n",number1*number2); /*Arithmetic Operator(*) */
	
	printf("Division:\nQuotient: %lf\n",number1*1.0/number2); /*Arithmetic Operator(/) */
	
	printf("Remainder: %i\n",number1%number2); /*Arithmetic Operator(%) */
	
	printf("number1 is greater than number2 is %d\n",number1>number2); /*Relation operator(>)*/
	
	printf("number1 is less than number2 is %d\n",number1<number2); /*Relation operator(<)*/
	
	printf("number1 is equal to number2 is %d\n",number1==number2); /*Relation operator(==)*/
	
	printf("number1 is less than or equal to number2 is %d\n",number1<=number2); /*Relation operator(<=)*/
	
	printf("number1 is greater than or equal to number2 is %d\n",number1>=number2); /*Relation operator(>=)*/
	
	printf("number1 is not equal to number2 is %d\n",number1!=number2); /*Relation operator(!=)*/
}
