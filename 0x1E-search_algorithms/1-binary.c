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

#include<stdlib.h>
#include<stdio.h>
#include<stdlib.h>

/**
* binary_search - a function
* @array: the array
* @size: size
* @value: a number
*
* Return: 1 or 0
*/

int binary_search(int *array, size_t size, int value)
{
	size_t L = 0, R = size - 1;
	int m;

	if (array == NULL)
		return (-1);

	while (L != R)
	{
		/*m = ceil((L + R) / 2);*/
		m = (L + R) / 2;
		if (array[m] > value)
			R = m - 1;
		else
			L = m;
		/*printf("\n L = %ld  R = %ld",L, R);*/
	}
	if (array[L] == value)
		return (L);
	return (-1);
}