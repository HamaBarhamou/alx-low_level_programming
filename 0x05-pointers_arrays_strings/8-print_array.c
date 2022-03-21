#include<stdio.h>
/**
 * print_array - a function that takes a pointer to an int as parameter and
 * updates the value it points to to 98
 * @a: the number pointer
 * @n : the number
 *
 * Return: 1 or 0
 */

void print_array(int *a, int n)
{
	int i = 0;

	if (n > 0)
	{
		while (i < n - 1)
		{
			printf("%d, ", a[i]);
			i++;
		}
		printf("%d", a[i]);
	}
	printf("\n");
}
