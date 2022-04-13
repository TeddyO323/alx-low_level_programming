#include <stdio.h>
#include <stdlib.h>
/**
 * main - prints the opcodes of its own main function.
 * @argc: arguments counter
 * @argv: arguments values
 *
 * Return: result
 */
int main(int argc, char *argv[])
{
	int n;
	char *ptr = (char *)main;
	int a;

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}

	n = atoi(argv[1]);

	if (n < 0)
	{
		printf("Error\n");
		exit(2);
	}
	for (a = 0; a < n - 1; a++)
	{
		printf("%02hhx ", ptr[a]);
	}

	printf("%02hhx\n", ptr[a]);
	return (0);


}
