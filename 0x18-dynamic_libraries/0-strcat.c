#include "main.h"

/**
 * _strcat - concatenates two strings
 * @dest: input parameter string
 * @src: input parameter string
 *
 * Return: dest
 */

char *_strcat(char *dest, char *src)
{
	int a;
	int b;

	a = 0;
	while (dest[a])
	{
		a++;
	}
	b = 0;
	while (src[b])
	{
		dest[a] = src[b];
		a++;
		b++;
	}
	return (dest);
}
