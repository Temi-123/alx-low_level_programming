#include <stdio.h>
#include <stdlib.h>
/**
 * main - a program to print the alphabets
 * Return: 0
 */
int main(void)
{
	char c;

	for (c = 'a'; c <= 'z'; c++)
		putchar(c);
	putchar('\n');
	return (0);
}
