#include <stdio.h>

/**
 * main - main block
 * Description: Print  lowercase followed by  uppercase alphabet using putchar.
 * Return: 0
 */

int main(void)
{
	char l = 'a';
	char L = 'A';

	while (l <= 'z')
	{
		putchar(l);
		l++;
	}

	while (L <= 'Z')
	{
		putchar(L);
		L++;
	}
	putchar('\n');
	return (0);
}
