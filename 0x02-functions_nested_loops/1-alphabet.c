#include "main.h"
/**
 * print_alphabet - Entry point
 * Return: 0 if success
 */
void print_alphabet(void)
{
	char small_letter;

	for (small_letter = 'a'; small_letter <= 'z'; small_letter++)
		_putchar(small_letter);

	_putchar('\n');
}
