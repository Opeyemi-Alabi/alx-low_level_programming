#include <stdio.h>
#include <stdlib.h>

/**
 * main -Entry point
 *
 * Return: 0 Always (Success)
 */
int main(void)
{
	char alphabet = 'a';

	do {
		putchar(alphabet);
		alphabet++;
	} while (alphabet <= 'z');

	putchar('\n');
	return (0);
}
