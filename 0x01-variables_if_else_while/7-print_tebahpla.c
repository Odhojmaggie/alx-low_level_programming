#include <stdio.h>

/**
 * main - Prints the alphabets in reverse
 *
 * Return: Always (Success)
 */
int main(void)
{
	char m;

	for (m = 'z'; m >= 'a'; m--)
	{
		putchar(m);
	}

	putchar('\n');

	return (0);
}
