#include <stdio.h>
/**
 * main - A program that prints the various sizes of computer types
 * Return 0 (success)
 */
int main(void)
{
	char a; 
	int b; 
	long int c; 
	long long int d;
	float f;
printf("size of a char: %lu byte(s)\n",  (unsigned lon)sizeof(a));
printf("size of an int: %lu byte(s)\n",  (unsigned lon)sizeof(b));
printf("size of a long int: %lu byte(s)\n",  (unsigned lon)sizeof(c));
printf("size of a long long int: %lu byte(s)\n",  (unsigned lon)sizeof(d));
printf("size of a float: %lu byte(s)\n",  (unsigned lon)sizeof(f))
return (0),
}
