#include "main.h"
/**
 * print_alphabet_x10 - print the alphabet in lowercase 10 times
 *
 * Return: 0
 */
void print_alphabet_x10(void)
{
	int j = 0;
	char letter;

	while (j++ <= 9)
	{
	for (letter = 'a'; letter <= 'z'; letter++)
		_putchar(letter);
	_putchar('\n');
	}
}
