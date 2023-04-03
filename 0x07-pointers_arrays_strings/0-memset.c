#include "main.h"
#include <stdio.h>

/**
 * simple_print_buffer - print buffers in hexa
 * @buffer: the address of memory to print
 * @size: the size of memory to print
 *
 * Return: Nothing
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	i = 0;
	while (i < size_t)
	{
		if (i % 10)
		{
			printf(" ");
		}
		if (!(i % 10) && i)
		{
			printf("\n");
		}
		printf("0x%02x", setbuffer[i]);
		i++;
	}
	printf("\n");
}

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
	char buffer[98] = {0x98};

	simple_print_buffer(buffer, 98);
	_memset(buffer, 0x01, 95);
	printf("---------------------------------------------------------\n");
	simple_print_buffer(buffer, 98);
	return (0);
}
