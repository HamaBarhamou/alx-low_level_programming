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
#include<stdarg.h>
#include<stdio.h>

/**
 * print_numbers - a function ...
 * @separator: the chaine
 * @n: the number
 * @...: the char
 *
 * Return: 1 or 0
 */
void print_numbers(char *separator, const unsigned int n, ...)
{
	va_list ap;
	unsigned int i;


	va_start(ap, n);

	for (i = 0; i < n - 1; i++)
	{
		if (separator != NULL)
			printf("%d%s", va_arg(ap, int), separator);
	}
	if (separator != NULL)
		printf("%d", va_arg(ap, int));
	printf("\n");
	va_end(ap);
}

