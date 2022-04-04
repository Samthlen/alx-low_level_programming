#include "main.h"

/**
<<<<<<< HEAD
 * _islower - Shows 1 if the input is a
 * lowercase character. Another cases, shows
 * 0
 * @c: The character to check for
 * Return: 1 if @c is lowercase otherwise 0
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
=======
 * _islower - checks for lowercase character.
 *
 * @c: char type letter
 *
 * Return: 1 if c is lowercase and 0 otherwise
 */

int _islower(int c)
{
	if (c >= 97 && c <= 123)
>>>>>>> 166eaf2e0225bf527a46d8a7673f9f2dccf7f6f8
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
