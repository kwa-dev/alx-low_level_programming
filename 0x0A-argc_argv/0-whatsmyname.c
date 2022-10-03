#include <stdio.h>
/**
 * main - prints file name
 *@argc: argument counter
 *@argv: argument vector
 *
 *Return: 0 for success else failure
 */
int main(int argc __attribute__((unused)), char *argv[])
{
	printf("%s\n", *argv);

	return (0);
}
