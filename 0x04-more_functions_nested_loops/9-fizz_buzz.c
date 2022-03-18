#include "main.h"
#include <stdlib.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int nb;

	for (nb = 1; nb <= 99; nb++)
	{
		if (nb % 3 == 0)
		{
			if (nb % 5 == 0)
				printf("FizzBuzz ");
			else
				printf("Fizz ");
		}
		else if (nb % 5 == 0)
		{
			if (nb % 3 == 0)
				printf("FizzBuzz ");
			else
				printf("Buzz ");

		}
		else
			printf("%d ", nb);
	}
	printf("Buzz\n");
	return (0);
}
