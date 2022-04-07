#include <stdio.h>
/**
 * main - entrypoint of c program
 * @argc: argument count
 * @argv: array of arguments
 *
 * Return: 0 for success
 */
int main(int argc, char **argv)
{
	char **pt = argv;
	int i = 0;

	for (; i < argc; i++)
	{
		printf("%s\n", *pt);
		pt++;
	}
	return (0);
}
