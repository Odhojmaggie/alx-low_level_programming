#include <stdio.h>

/**
 * main - prints single digit numbers of base 10 stsrting from 0
 *
 * Return: Always (Success)
 */
int main(void)
{
	int z;

	for (z = '0'; z <= '9'; z++)
	{
		putchar(z);
	}

	putchar('\n');

	return (0);
}
