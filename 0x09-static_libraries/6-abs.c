#include "main.h"

/**
<<<<<<< HEAD
 * _abs - computes the absolute valueof an integer
 *
 * @n: an integer
 *
 * Return: The absolute value of @n
=======
 * _abs - compute the absolute value of an integer
 * @n: int type number
 * Return: absolute value of @n
>>>>>>> 166eaf2e0225bf527a46d8a7673f9f2dccf7f6f8
 */

int _abs(int n)
{
	if (n < 0)
<<<<<<< HEAD
		return (n * -1);
	return (n);
=======
	{
		return (n * -1);
	}
	else
	{
		return (n);
	}
>>>>>>> 166eaf2e0225bf527a46d8a7673f9f2dccf7f6f8
}
