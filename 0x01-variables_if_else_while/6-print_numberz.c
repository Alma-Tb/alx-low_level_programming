#include <stdio.h>

/**
 * main - main block 
 * Description: Print all numberd of base 10 twice
 * Return: 0
 */

int main(void)
{
	int num;

	for (num = 0; num < 10; num++)
		putchar((num % 10) + '0');
	putchar('\n');
	return (0);
}
