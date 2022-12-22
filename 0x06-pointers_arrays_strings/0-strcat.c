#include "main.h"

/**
 * _strcat - concatenates two strings
 * @dest: appended value
 * @src: source value
 *
 * Return: pointer to the resulting string dest
 *
 * Created by Omar El-Shazly
 */

char *_strcat(char *dest, char *src)
{
	int a;
	int b;

	a = 0;

	while (dest[a] =! 0)
	{
		a++;
	}

	b = 0;

	while (src[b] != 0)
	{
		dest[a] = src[b];
		a++;
		b++;
	}
	return (dest);
}
