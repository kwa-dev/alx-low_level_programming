#include <stdio.h>

/**
 * main - prints all the numbers of base 16 in lowercase,
 * followed by a new line
 * Return: Always 0 (Success)
 */
int main(void)
{
	int hex;
	char cha;

	for (hex = 48; hex < 58; hex++)
	{
		putchar(hex);
	}
	for (cha = 'a'; cha <= 'f'; cha++)
	{
		putchar(cha);
	}
	putchar('\n');
	return (0);
}
