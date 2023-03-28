#include "main.h"
/**
 * print_rev - function that reverses a string
 * @s: funtion parameter
 * Return: 0
 */

void print_rev(char *s)
{
	int i;
	int count = 0;

	for (i = 0 ; s[i] != '\0' ; i++)
		count++;
	for (i = count ; i >= 0 ; i--)
		_putchar(s[i]);
	return (count++);
}
