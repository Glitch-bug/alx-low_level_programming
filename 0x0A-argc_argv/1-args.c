#include <stdio.h>

/**
 * main - prints the number of arguements
 *@argc: int represent number of arguements
 *@argv: array of pointers
 *Return: zero
 */

int main(int argc, __attribute__((unused)) char *argv[])
{
	printf("%d\n", argc - 1);
	return (0);
}
