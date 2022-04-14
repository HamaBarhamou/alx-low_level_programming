/*****************************************************************************/
/*                                                                           */
/*                                               _____  ______    ____  ___  */
/* 0-memset.c                                   /  _  \ |    |    \   \/  /  */
/*                                             /  /_\  \|    |     \     /   */
/* By: Barahmou   <hamabarhamou@gmail.com>    /    |    \    |___  /     \   */
/*                                            \____|__  /_______ \/___/\  \  */
/* Created: 2022-03-28 09:44:03   $Barahmou           \/        \/      \_/  */
/* Updated: 2022-03-28 09:44:03 by Barahmou                                  */
/*                                                                           */
/*****************************************************************************/

#include <stdlib.h>
#include <stdio.h>

/**
 * op_add- a function ...
 * @a: the tab of integer
 * @b: the number
 *
 * Return: 1 or 0
 */
int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub- a function ...
 * @a: the tab of integer
 * @b: the number
 *
 * Return: 1 or 0
 */
int op_sub(int a, int b)
{
	return (a - b);
}


/**
 * op_mul- a function ...
 * @a: the tab of integer
 * @b: the number
 *
 * Return: 1 or 0
 */
int op_mul(int a, int b)
{
	return (a * b);
}


/**
 * op_div- a function ...
 * @a: the tab of integer
 * @b: the number
 *
 * Return: 1 or 0
 */
int op_div(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a / b);
}


/**
 * op_mod- a function ...
 * @a: the tab of integer
 * @b: the number
 *
 * Return: 1 or 0
 */
int op_mod(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a % b);
}

