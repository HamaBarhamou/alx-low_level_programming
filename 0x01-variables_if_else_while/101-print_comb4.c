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

#include<stdio.h>
#include <stdlib.h>

/**
* main - Entry point
*
* Return: Always 0 (Success)
*/

int main(void)
{
	int u = 50;
	int d = 49;
	int c = 48;
	int position_u = u;
	int position_d = d;
	int position_uu = u;
	/* your code goes there */
	while (c <= 55)
	{
		while (d <= 56)
		{
			while (u <= 57)
			{
				putchar(c);
				putchar(d);
				putchar(u);
				if (c != 55 || d != 56 || u != 57)
				{
					putchar(',');
					putchar(' ');

				}
			u++;
			}
			d++;
			position_u++;
			u = position_u;
		}
		position_u = position_uu;
		position_u++;
		position_uu++;
		u = position_u;
		position_d++;
		d = position_d;
		c++;
	}
	putchar('\n');
	return (0);
}

