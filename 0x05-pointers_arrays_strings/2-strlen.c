#include "main.h"

/**
 * _strlen - returns the length of a string
 *
 * @s: string variable
 *
 * Return: the length of a string
 *
 * Created by Omar El-Shazly
 *
 */

int _strlen(char *s)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
		;

	return (i);
}
