#include "holberton.h"

/**
 * _islower - prints 1 if lowecase else prints 0
 * a : takes an integer
 * Return: 0
 */
int _islower(int a)
{
	if (a <= 'z' && a >= 'a')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
