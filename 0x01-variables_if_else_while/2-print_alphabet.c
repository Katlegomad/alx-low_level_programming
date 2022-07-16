#include <stdio.h>
/**
 * main - Entry point
 * Prints alpha in lowercase
 * Return: 0 on success
 */
int main(void)
{
	char start = 'a';
	char end = 'z';

	char ch = start;

	while (ch <= end)
	{
		putchar(ch);
		ch++;
	}
		putchar('\n');

	return (0);
}
