#include <stdio.h>
/**
 * main - print the lowercase and uppercasealphabet
 *
 * Return: 0
 */
int main(void)
{
	char c;
	char i;

	for (c = 'a'; c <= 'z'; c++)
		putchar(c);
	for (i = 'A'; i <= 'Z'; i++)
		putchar(i);
	putchar('\n');
	return (0);
}
