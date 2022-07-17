#include <stdio.h>
/**
 * main - Entry point
 * Prints alpha in lower and uppercase
 * Return: 0 on success
 */
int main(void)
{
	char alpha = 'a';
	while (alpha <= 'z')

	{

	putchar(alpha);
	alpha++;
	}
	alpha = 'A';

	while (alpha <= 'Z')
	{
	putchar(alpha);
	alpha++;
	}
	putchar('\n');
	return (0);
}
