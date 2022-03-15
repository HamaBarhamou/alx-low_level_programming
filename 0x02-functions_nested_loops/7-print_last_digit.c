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
#include<stdio.h>

/**
 *print_last_digit - a function that prints the last digit of a number.
 *@n: The number
 *
 *Return: On success 1.
 *On error, -1 is returned, and errno is set appropriately.
 * Returns the value of the last digit
 */
int print_last_digit(int n)
{
	int r;

	if (n < 0)
		n = -1 * n;
	r = n % 10;
	putchar(r + '0');
	printf(" hello \n");
	return (r);
}

