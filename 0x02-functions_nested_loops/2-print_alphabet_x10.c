#include "main.h"

/**
 * print_alphabet_x10 - prints the alphabet 10 times in lowercasee.
 *
 */
void print_alphabet_x10(void)
{
	char alph;
	int num;

	for (num = 0; num < 10; num++)
	{
		for (alph = 'a'; alph <= 'z'; alph++)
		{
			_putchar(alph);
		}
		_putchar('\n');
	}
}
