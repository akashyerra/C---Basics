/*Limits for types of int*/
#include<stdio.h>
#include<limits.h>
void main()

{
printf("Short:\nSigned: %hd to %hd\n",SHRT_MIN, SHRT_MAX);
printf("Unsigned: %hu to %hu\n \n", 0, USHRT_MAX);

printf("int:\nSigned: %i to %i\n",INT_MIN, INT_MAX);
printf("Unsigned: %u to %u\n \n", 0, UINT_MAX);

printf("Long:\nSigned: %ld to %ld\n",LONG_MIN, LONG_MAX);
printf("Unsigned: %lu to %lu\n \n", 0, ULONG_MAX);

printf("Short:\nSigned: %lld to %lld\n",LONG_LONG_MIN, LONG_LONG_MAX);
printf("Unsigned: %llu to %llu\n \n", 0, ULONG_LONG_MAX);
}
