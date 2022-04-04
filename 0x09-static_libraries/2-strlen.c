#include "main.h"

/**
<<<<<<< HEAD
 * _strlen - convert strings to length
 * @s:parameter to be converted
 * Return: length of a given string
=======
 * _strlen - function that returns the lenght of a string.
 *
 * @s: char type variable
 *
 * Return: string length of a given string.
>>>>>>> 166eaf2e0225bf527a46d8a7673f9f2dccf7f6f8
 */

int _strlen(char *s)
{
	int i;

	i = 0;
<<<<<<< HEAD

	/**
	 * for (i = 0;s[i] != '\0'; i++)
	 * {
	 *	n =  i;
	 *}
	 */

=======
>>>>>>> 166eaf2e0225bf527a46d8a7673f9f2dccf7f6f8
	while (s[i] != '\0')
	{
		i++;
	}
<<<<<<< HEAD

=======
>>>>>>> 166eaf2e0225bf527a46d8a7673f9f2dccf7f6f8
	return (i);
}
