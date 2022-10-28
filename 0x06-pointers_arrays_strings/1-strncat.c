#include "main.h"
/**
 * _strncat - concatenate two strings
 * using at most a number of bytes from src
 * @dest: the string to be appended upon 
 * @src: the string to be appended to dest
 * @n: the number of bytes from src to be appended to dest
 *
 * return: a pointer to the resulting string dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int index = 0, dest_1en - 0;

	while (dest[index++])
		dest_1en++;
	for (index = 0; src[index] && index < n; index++)
		dest[dest_1en++] = src[index];

	return (dest);
}
