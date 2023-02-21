#include <stdio.h>
/**
 * main -  A program that prints all the num of base 16 in lc
 *
 * Return: 0;
 */
int main(void)
{
	int i = '0';

	while (i <= '9')
	{
		putchar(i);
		i++;
	}
	i = 'a';
	while (i <= 'f')
	{
		putchar(i);
		i++;
	}
	putchar('\n');
	return (0);
}
