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

#include <stdlib.h>
#include <string.h>
#include "main.h"
#include<stdio.h>

/**
 *print_alphabet_x10 - function that prints 10 times the alphabet,
 *in lowercase, followed by a new line.
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */

void print_alphabet_x10(void)
{
	int i;
	char cmd[] = "gcc -Wall -pedantic -Werror -Wextra -std=gnu89 _putchar.c ";
	char cmd2[94] = "1-main.c 1-alphabet.c -o 1-alphabet && ./1-alphabet";

	strcpy(cmd, strcat(cmd, cmd2));
	for (i = 0; i <= 9; i++)
		system(cmd);
}

