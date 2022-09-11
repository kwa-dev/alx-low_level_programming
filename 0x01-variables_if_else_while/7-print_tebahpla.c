#include <stdio.h>

/**
 * main - prints lowercase aplphabets using putchar
 * Return: 0
 */
int main(void)
{
	char n;

	for (n = 122; n > 96; n--)
	{
		putchar(n);
	}
	putchar('\n');
	return (0);
}
