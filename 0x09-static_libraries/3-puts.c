<<<<<<< HEAD
#include "main.h"

/**
 * _puts - function for printing strings
 * @str: string to be printed
 */

void _puts(char *str)
{
	int i;

	i = 0;

	for (i = 0; str[i] != 0; i++)
	{
		_putchar(str[i]);
	}
	_putchar(10);
=======
#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	puts("\"Programming is like building a multilingual puzzle");
	return (0);
>>>>>>> 166eaf2e0225bf527a46d8a7673f9f2dccf7f6f8
}
