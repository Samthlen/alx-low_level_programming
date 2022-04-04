#include "main.h"

/**
<<<<<<< HEAD
* _strchr - locate character in a string
* @s: char array string
* @c: char to look for
* Return: NULL if char not found, or pointer to first occurrence of char `c`
*/

char *_strchr(char *s, char c)
{
while (*s != '\0')
{
if (*s == c)
return (s);
else if (*(s + 1) == c)
return (s + 1);
s++;
}

return (s + 1);
=======
 * _strchr - locate character in a string
 * @s: char array string
 * @c: char to look for
 * Return: NULL if char not found, or pointer to first occurrence of char `c`
 */

char *_strchr(char *s, char c)
{
	while (*s != '\0')
	{
		if (*s == c)
			return (s);
		else if (*(s + 1) == c)
			return (s + 1);
		s++;
	}

	return (s + 1);
>>>>>>> 166eaf2e0225bf527a46d8a7673f9f2dccf7f6f8
}
