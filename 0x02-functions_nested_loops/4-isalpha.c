#include "holberton.h"

/**
 * _isalpha - check for alphabet characters
 * 
 *
 * Return: 0
 */
int _isalpha(int z)
{
	if ((z >= 'a' && z <= 'z') || (z >= 'A' && z <= 'Z'))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
