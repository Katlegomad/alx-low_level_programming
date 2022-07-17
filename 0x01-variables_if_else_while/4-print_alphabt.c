#include <stdio.h>
/**
 * main - Entry point
 * Print all alpha exclude e and q
 * Return: 0 on success
 */
int main(void)
{
	char alpha = 'a';

	while (alpha <= 'z')

	{
		putchar(alpha);
		alpha++;
	if (alpha == 'e' || alpha == 'q')
		alpha++;
	}
	putchar('\n');
	return (0);
}
