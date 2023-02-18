#include <stdio.h>

/**
 * main - main block
 * Description: print all base16 numbers
 * Return: 0
 */

int main(void)
{
	int num;
	char c;

	for (num = 0; num < 10; num++)
		putchar((num % 10) + '0');
	for (letter = 'a'; letter <= 'f'; letter++)
		putchar(letter);
	putchar('\n');

	return (0);
}
