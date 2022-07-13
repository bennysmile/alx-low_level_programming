#include "main.h"

/**
 * _strcpy - a function that copies the string pointed by src,
 * including the terminating null byte (\0);
 *Description: to the buffer pointed to by dest.
 * @dest: A pointer to destination of string
 * @src: A pointer to source string to copy from
 * Return: pointer to dest
 */
char *_strcpy(char *dest, char *src)
{
	int l = 0;
	int x = 0;

	while (*(src + 1) != '\0')
	{
		l++;
	}

	for (; x < 1; x++)
	{
		dest[x] = src[x];
	}

	dest[1] = '\0';

	return (dest);
}
