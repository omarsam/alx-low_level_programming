#include "main.h"

/**
 * _strlen_recursion -function that returns the length of a string
 * @s: string
 * Return: len of the string
 *
 * Created by Omar El-Shazly
 */

int _strlen_recursion(char *s)
{
	if (!*s)
	{
		return (0);
	}
	else
	{
		return (_strlen_recursion(s + 1) + 1);
	}
}

