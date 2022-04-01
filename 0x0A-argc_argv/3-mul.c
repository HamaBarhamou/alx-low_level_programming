/*****************************************************************************/
/*                                                                           */
/*                                               _____  ______    ____  ___  */
/* 0-puts_recursion.c                           /  _  \ |    |    \   \/  /  */
/*                                             /  /_\  \|    |     \     /   */
/* By: Barahmou   <hamabarhamou@gmail.com>    /    |    \    |___  /     \   */
/*                                            \____|__  /_______ \/___/\  \  */
/* Created: 2022-03-30 09:46:22   $Barahmou           \/        \/      \_/  */
/* Updated: 2022-03-30 09:46:22 by Barahmou                                  */
/*                                                                           */
/*****************************************************************************/

#include<stdio.h>
#define UNUSED(x) (void)(x)

/**
* ft_atoi - function
*
* @str: the chaine
* Return: Always 0.
*/

int		ft_atoi(const char *str)
{
	int		n;
	int		sign;

	n = 0;
	while (*str == ' ' || *str == '\t' || *str == '\v' || *str == '\r' ||
			*str == '\n' || *str == '\f')
		str++;
	sign = *str == '-' ? -1 : 1;
	if (sign == -1 || *str == '+')
		str++;
	while (*str)
	{
		if (*str >= '0' && *str <= '9')
			n = n * 10 + (*str - '0');
		else
			break;
		str++;
	}
	return (n * sign);

}

/**
* main - function
*
* @argv: the chaine of chaine
* @argc: the int
* Return: Always 0.
*/

int main(int argc, char **argv)
{
	UNUSED(argc);
	if (argc != 3)
	{
		printf("Error\n");
		return (0);
	}
	printf("%d\n", ft_atoi(argv[1]) * ft_atoi(argv[2]));
	return (0);
}

