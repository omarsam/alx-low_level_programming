#include "main.h"

/**
 * _isalpha - checks for alphabetic character
 *
 * @c: character value to be tested
 *
 * Return: 1 if c is a letter, otherwise return 0
 *
 * Created by Omar El-Shazly
 */

int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		return (1);
	else
		return (0);
}
