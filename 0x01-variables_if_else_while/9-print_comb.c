#include <stdio.h>

/**
 * main - main block
 * Description: print single digit numbers seperated by a comma
 * Return: 0
 */

int main (void)
{
	int num;

	for (num = 0; num <= 9; num ++)
	{
		if (num < 9 )
		{
			putchar((num % 10) + '0');
			putchar(',');
			putchar(' ');
		}
		else 
			putchar((num % 10) + '0');
	}

	putchar('\n');
	return (0);
}
