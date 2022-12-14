#include "main.h"

/**
 * print_alphabet - prints the alphabet, in lowercase, followed by a new line
 * created by Omar El-Shazly
 */

void print_alphabet(void)
{
	char letter;

	for (letter = 'a'; letter <= 'z'; letter++)
		_putchar(letter);

	_putchar('\n');
}
