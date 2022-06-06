#include <stdio.h>

/**
 * main - Prints some letters of the alphabet
 *
 * Return: Always (Success)
 */
int main(void)
{
	char n;

	for (n = 'a'; n <= 'z'; n++)
	{
		if (n != 'e' && n != 'q')
		{
			putchar(n);
		}
	}

	putchar('\n');

	return (0);
}
