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
* main - Entry point
*
* Return: Always 0 (Success)
*/

int main(void)
{
	char chaine[] = "_putchar\n";
	int i = 0;

	while (chaine[i])
	{
		_putchar(chaine[i]);
		i++;
	}
	return (0);
}

