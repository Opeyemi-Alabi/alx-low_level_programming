#include "main.h"
/**
 * jack_bauer - prints a 24 hour timer
 */
void jack_bauer(void)
{
	int h, mm;

	for (h = 0; h <= 23; h++)
	{
		for (mm = 0; mm <= 59; mm++)
		{
			_putchar(h / 10 + '0');
			_putchar(h % 10 + '0');
			_putchar(':');
			_putchar(mm / 10 + '0');
			_putchar(mm % 10 + '0');
			_putchar('\n');
		}
	}
}
