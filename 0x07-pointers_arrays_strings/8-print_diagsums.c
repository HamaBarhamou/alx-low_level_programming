/*****************************************************************************/
/*                                                                           */
/*                                               _____  ______    ____  ___  */
/* 8-print_diagsums.c                           /  _  \ |    |    \   \/  /  */
/*                                             /  /_\  \|    |     \     /   */
/* By: Barahmou   <hamabarhamou@gmail.com>    /    |    \    |___  /     \   */
/*                                            \____|__  /_______ \/___/\  \  */
/* Created: 2022-03-28 09:44:03   $Barahmou           \/        \/      \_/  */
/* Updated: 2022-03-28 09:44:03 by Barahmou                                  */
/*                                                                           */
/*****************************************************************************/

#include <string.h>

/**
 * print_diagsums - a function ...
 * @a: the matrix
 * @size: the length of matrice
 *
 * Return: 1 or 0
 */


void print_diagsums(int *a, int size)
{
	int	i =0, som1 = 0, som2 = 0;
	
	for (i = 0; i < size; i++)
	{
		som1 = som1 + (*a)[i][i];
		som2 = som2 + (*a)[size -1 -i][size -1 -i];
	}
	printf("%d, %d",som1,som2);
}

