/*Range of int classification*/
#include<stdio.h>
void main ()
{
	short number1=-32768, number2=32767, number3 = 0, number4 = 65535;//Variable declaration
	printf("Short:\nSigned: %hd to %hd\nUnsigned: %hu to %hu",number1,number2,number3,number4);//Result
	
	int number5=-2147483648, number6=2147483647, number7=0, number8=4294967295;//Variable declaration
	printf("\nint:\nSigned: %d to %d\nUnsigned: %u to %u",number5,number6,number7,number8);//Result
	
	long number9=-2147483648, number10=2147483647, number11=0, number12=4294967295;//Variable declaration
	printf("\nLong:\nSigned: %ld to %ld\nUnsigned: %lu to %lu",number9,number10,number11,number12);//Result
	
	long long number13=-9223372036854775808, number14=9223372036854775807, number15=0, number16=18446744073709551615;//Variable declaration
	printf("\nLong Long:\nSigned: %lld to %lld\nUnsigned: %llu to %llu",number13,number14,number15,number16);//Result
}
