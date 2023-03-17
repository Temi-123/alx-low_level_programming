#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - entry point of program
 *
 * Return: return(0)
 */
int main(void)
{
	int n;
	
	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n > 5)
	{
		printf("%d is greater than 5/n", n);
	}
	else if (n < 6)
	{
		printf("%d is less than 6/n", n);
	}
	else
		printf("%d is zero/n", n);
return (0);
}
