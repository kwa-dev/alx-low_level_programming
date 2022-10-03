#include <stdio.h>

/**
 * main - prints all the arguments passed
 *@argc: number of arguments
 *@argv: array of arguments
 *
 *Return: 0 success
 */
int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}

	return (0);
}
