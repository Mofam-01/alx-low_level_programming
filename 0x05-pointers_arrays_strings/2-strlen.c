#include "main.h"

/**
 * _strlen - returns the string lenght
 * @s: string whose length to be printed
 * Return: length of the string
 */

int _strlen(char *s)
{
	int i;
	int count = 0;

	for (i = 0; s[1] != '\0'; i++)
	{
		count++;
	}
	return (count);
}
