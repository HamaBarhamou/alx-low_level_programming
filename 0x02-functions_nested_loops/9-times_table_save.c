/*
******************************************************************************
*                                                                            *
*                                                 _____  ______    ____  ___ *
*    5-printf.c                                  /  _  \ |    |    \   \/  / *
*                                               /  /_\  \|    |     \     /  *
*    By: Barahmou <hamabarhamou@gmail.com>     /    |    \    |___  /     \  *
*                                              \____|__  /_______ \/___/\  \ *
*    Created: 2022-03-10 13:29:43 by Barahmou          \/        \/      \_/ *
*    Updated: 2022-03-10 13:29:43 by Barahmou                                *
*                                                                            *
******************************************************************************
*/

#include "main.h"

/**
 *times_table - a function that prints the 9 times table, starting with 0
 *starting from 00:00 to 23:59.
 *
 *Return: On success 1.
 *On error, -1 is returned, and errno is set appropriately.
 */
void times_table(void)
{
	int i = 0, j = 0, k;

	for (i = 0; i <= 9; i++)
	{
		for (j = 0; j <= 9; j++)
		{
			k = i * j;
			if (k <= 9)
				_putchar(k + '0');
			else
			{
				_putchar(k / 10 + '0');
				_putchar(k % 10 + '0');
			}
			
			if (j < 9)
			{
				_putchar(',');
				if (k <= 9)
				{
					_putchar(' ');
					_putchar(' ');
				}
				else
					_putchar(' ');
			}
		}

		_putchar('\n');
	}
}

