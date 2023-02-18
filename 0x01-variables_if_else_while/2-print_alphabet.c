#include <stdio.h>

/**
 * main - main block
 * Description: Print lowercase alphabets using 'putchar'.
 * Return: 0
 */

int main(void)
{
	char letter;

	for (letter = 'a'; letter <= 'z'; letter++)
		putchar(letter);
	putchar('\n');
	return (0);
}
