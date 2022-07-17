#include <stdio.h>
/**
 * main - Entry point
 * Print nos using putchar
 * Return: 0 on success
 */
int main(void)
{
	int a;

	for (a = 0; a < 10; a++)

	{
		putchar(a + '0');

	}
	putchar('\n');

	return (0);
}
