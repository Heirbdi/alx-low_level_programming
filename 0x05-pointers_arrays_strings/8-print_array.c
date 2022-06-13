#include <stdio.h>
#include "main.h"
/**
 * print_array - check the code
 * @a: pointer int type
 * @n: is int variable
 * Return: Always 0.
 */
void print_array(int *a, int n)
{
	int x;

	for (x = 0 ; x < n; x++)
	{
		printf("%d", a[x]);
		if (x != n - 1)
		{
			printf(", ");
		}
	}
	printf("\n");
}
