#include <stdio.h>
/**
 * main - Entry point
 * Prints alpha in lower and uppercase
 * Return: 0 on success
 */
int main()
{
	char start = 'a';
	char end = 'z';

	char ch = start;

	while (ch <= end)
	{
		putchar(ch);
		ch++;

	}

	char start = 'A';
	char end = 'z';

	char ch = start;

	while (ch <= end)
	{
		putchar(ch);
		ch++;

	}

		putchar('\n')

	return (0);
}
