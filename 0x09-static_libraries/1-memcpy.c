#include "main.h"

/**
<<<<<<< HEAD
* _memcpy - copy memory area
* @dest: char array to copy into
* @src: char array to copy from
* @n: number of elements to copy
* Return: pointer to `dest`
*/

char *_memcpy(char *dest, char *src, unsigned int n)
{
char *yolo;

yolo = dest;
while (n > 0)
{
*dest = *src;
dest++;
src++;
n--;
}

return (yolo);
=======
 * _memcpy - copy memory area
/**
 * _memcpy - copy memory area
 * @dest: char array to copy into
 * @src: char array to copy from
 * @n: number of elements to copy
 * Return: pointer to `dest`
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	char *yolo;

	yolo = dest;
	while (n > 0)
	{
 * @dest: char array to copy into
 * @src: char array to copy from
 * @n: number of elements to copy
 * Return: pointer to `dest`
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	char *yolo;

	yolo = dest;
	while (n > 0)
	{
		*dest = *src;
		dest++;
		src++;
		n--;
	}

	return (yolo);
>>>>>>> 166eaf2e0225bf527a46d8a7673f9f2dccf7f6f8
}
