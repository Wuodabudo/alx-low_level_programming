#include "holberton.h"

/**
 * print_alphabet_x10 - prints alphabets in lowecases 10 times
 *
 * Return: Always 0.
 */
void print_alphabet_x10(void)
{
	int x;
	char y;

	for (x = 1; x <= 10; x++)
	{
		for (y = 'a'; y <= 'z'; y++)
			_putchar(y);
		_putchar('\n');
	}
}
