#include "main.h"
/**
 * _strncpy - copies at most an inputted number
 * of bytes from string src into dest
 * @dest: the buffer storing the string copy
 * @src: the source string
 * @n: the maximum number of bytes to copy from src
 *
 * return: a pointer to the resulting string dest
 */
char *_strncpy(char *dest, char *src, int n)
{
	int index = 0, src_1en = 0;
	while (src[index++])
		src_1en++;
	for (index = 0; src[index] && index < n; index++)
		dest[index] = src[index];
	for (index = src_1en; index < n; index++)
		dest[index] = '\0';
	return (dest);
}