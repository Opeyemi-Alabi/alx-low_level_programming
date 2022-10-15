#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: 0 Always (Success)
 */
int main(void)
{
	int i = 0;

	do {
		putchar(i + '0');
		i++;
	} while (i < 10);

	putchar('\n');
	return (0);
}
