#include <stdio.h>
/**
 * main - prints file name
 *@argc: argument counter
 *@argv: argument vector
 *
 *Return: 0 for success else failure
 */
int main(int argc, char *argv[] __attribute__((unused)))
{
	printf("%d\n", argc - 1);
	return (0);
}
