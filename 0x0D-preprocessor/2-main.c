#include <stdio.h>
#include <unistd.h>

/**
 * _putchar - writes the character c to stdout
 * @c: The character to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
	/*int i = 0;

	while (__FILE__[i])
	{
		_putchar(__FILE__[i]);
		i++;
	}
	_putchar('\n');*/
	printf("%s\n",__FILE__);
	return (0);
}
