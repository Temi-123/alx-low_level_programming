#include <stdio.h>
#include "main.h"
/**
 * main - print new line for putchar
 *
 * Return: return(0)
 */
int main(void)
{
	char str[] = "_putchar";
	int i;

	for (i = 0; i < 8; i++)
		_putchar (str[i]);
	putchar('\n');
	return (0);
}
