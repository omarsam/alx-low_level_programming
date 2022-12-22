#include "main.h"

/**
 * reverse_array - reverses the content of an array of integers.
 * @a: the array to be reversed
 * @n: number of iterations
 *
 * Created by Omar El-Shazly
 */

void reverse_array(int *a, int n)
{
	int i;
	int t;

	i = 0;
	n = n - 1;

	while (i < n)
	{
		t = a[i];
		a[i] = a[n];
		a[n] = t;
		i++;
		n--;
	}
}
