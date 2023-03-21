#include <stdio.h>
/**
 * main - Print single digit number;
 *
 * Return: return(0)
 */
int main(void)
{
	int digit;

	for (digit = 0; digit < 10; digit++)
	{
		if (digit == 9)
		putchar(digit);
		putchar(',');
		putchar(' ');
	}
	putchar('\n');
	return (0);
}

