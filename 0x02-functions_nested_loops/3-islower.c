#include "main.h"

/**
 * _islower - checks for lowercase character.
 * @c: is the char to be checked
 * Created by Omar El-Shazly
 *
 * Return: 1 if lowercase character, otherwise 0
 */

int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}
