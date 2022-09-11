#include <stdio.h>

/**
 * main - prints the alphabet in lowercase and upper case
 * Return: 0
 */
int main(void)
{
	char ch;
	char chA;

	for (ch = 'a'; ch <= 'z'; ch++)
	{
		putchar(ch);
	}
	for (chA = 'A'; chA <= 'Z'; chA++)
	{
		putchar(chA);
	}
	putchar('\n');
	return (0);
}
