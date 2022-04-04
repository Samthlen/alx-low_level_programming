#include "main.h"

/**
<<<<<<< HEAD
 * _isalpha - Checks for alphabetic character
 *
 * @c: The character to test
 * Return: 1 if @c is a letter, lowercase or uppercase
 *
 */
int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		return (1);
	return (0);
=======
 * _isalpha - checks for lowercase character.
 *
 * @c: char type letter
 *
 * Return: 1 if c is lowercase or uppercase and 0 otherwise
 */

int _isalpha(int c)
{
	if ((c >= 97 && c <= 123) || (c >= 65 && c <= 91))
	{
		return (1);
	}
	else
	{
		return (0);
	}
>>>>>>> 166eaf2e0225bf527a46d8a7673f9f2dccf7f6f8
}
