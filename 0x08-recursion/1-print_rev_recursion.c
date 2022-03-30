#include "stdio.h"

/**
 * _print_rev_recursion - print a string in reverse
 * @s: string
 */

void _print_rev_recursion(char *s)
{
	int length = 0;
	int index = 0;

	while (s[index] != '\0')
	{
		index++;
		length++;
	}
	for (index = length - 1; index >= 0; index--)
	{
		printf("%c ", s[index]);
	}
	printf("\n");
}


