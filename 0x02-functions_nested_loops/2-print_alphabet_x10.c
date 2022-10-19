#include "main.h"
/**
 * print_alphabet_x10 - prints alphabet 10 times
 * Return: 0 if success
 */

void print_alphabet_x10(void)
{
	int i;
	char small_letter;

	for (i = 0; i < 10; i++)
	{
		for (small_letter = 'a'; small_letter <= 'z'; small_letter++)
		{
			_putchar(small_letter);
		}

		_putchar('\n');
	}
}
