/*ASCII VALUES FOR THE GIVEN INTEGERS AND CHARACTERS*/
#include<stdio.h>
void main()
{
	char character; int number;													//variable declaration
	printf("Enter any character A-Z (or) a-z:");
	scanf("%c", &character);													// Taking inputs from the user
	printf("The corresponding ASCII value for %c is: %d", character, character);// Corresponding ASCII value for the given character
	
	printf("\n \nEnter any number ranging from 65-90 (or) 97-122: ");
	scanf("%d", &number);														// Taking inputs from the user
	printf("The corresponding ASCII value for %d is: %c", number, number);		// Corresponding ASCII value for the given integer
}
