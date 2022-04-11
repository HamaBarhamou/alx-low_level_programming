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

#include<stdio.h>
#include<stdlib.h>
#include "dog.h"

/**
 * print_dog - a function ...
 * @d: the pointeur of structure
 *
 * Return: 1 or 0
 */

void print_dog(struct dog *d)
{
	if (d == NULL)
		exit(3);

	printf("Name: ");
	if (d->name == NULL)
		printf("nil\n");
	else
		printf("%s\n", d->name);

	printf("Age: ");
	if (d->age == 0)
		printf("nil\n");
	else
		printf("%f\n", d->age);

	printf("Owner: ");
	if (d->owner == NULL)
		printf("nil\n");
	else
		printf("%s\n", d->owner);
}

