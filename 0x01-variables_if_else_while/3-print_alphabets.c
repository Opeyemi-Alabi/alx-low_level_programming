#include <stdio.h>
/**
 * main- Entry point
 *
 * Return: 0 on (Success)
 */

int main(void)
{
	char small_letter = 'a';
	char cap_letter = 'A';

	do {
		putchar(small_letter);
		small_letter++;
	} while (small_letter <= 'z');

	do {
		putchar(cap_letter);
		cap_letter++;
	} while (cap_letter <= 'Z');

	putchar('\n');
	return (0);
}
