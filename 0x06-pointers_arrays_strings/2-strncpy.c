#include "main.h"

/**
 * _strncpy -copies a string
 *
 * @dest: destination to be returned
 * @src: source char
 * @n: times to iterate
 *
 * Return: dest
 *
 * Created by Omar El-Shazly
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i;

	i = 0;
	while (i < n && src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}

	i = i;
	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}
	return (dest);
}
