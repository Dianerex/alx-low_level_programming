#include <stdio.h>
#include <ctype.h>
/**
 * main -  Program that prints the alphabet in lowercase
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
int x;
for (x = 'A'; x <= 'Z'; x++)
{
char small = tolower(x);
putchar(small);
}
return (0);
}
