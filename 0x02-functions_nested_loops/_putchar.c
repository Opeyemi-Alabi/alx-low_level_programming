#include "main.h"
#include <unistd.h>
/**
 * main - Entry point
 * Return: 0 if success
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
