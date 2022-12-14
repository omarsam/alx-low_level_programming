#include "main.h"

/**
 * main - print _putchar
 * written by omar el-shazly
 * Return: 0 When success
 */

int main(void)
{
	char *al = "_putchar";

	while (*al)
	{
		_putchar(*al);
		al++;
	}
	_putchar('\n');

	return (0);
}
