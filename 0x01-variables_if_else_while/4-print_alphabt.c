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
	char ch = 'a';
	int i = 0;
	/* your code goes there */
	while (i < 26)
	{
		if (ch != 'q' &&  ch != 'e')
			putchar(ch);
		ch++;
		i++;
	}
	putchar('\n');
	return (0);
}

