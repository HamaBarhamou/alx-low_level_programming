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
	int u = 49;
	int d = 48;
	int position_u = 48;
	/* your code goes there */
	while (d < 57)
	{
		while(u <= 57)
		{
			putchar(d);
			putchar(u);
			putchar(',');
			putchar(' ');
			u++;
		}
		d++;
		position_u ++;
		u = position_u;
	}
	putchar('\n');
	return (0);
}

