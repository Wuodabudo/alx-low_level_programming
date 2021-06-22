#include <stdio.h>
/**
 * print_to_98 - function to print numbers
 * @v : integer
 * Return: 0
 **/
void print_to_98(int v)
{
	int a;

	if (v < 98)
	{
		for (a = v; a < 98; a++)
		printf("%d, ", a);
	}
	else if (v > 98)
	{
		for (a = v; a > 98; a--)
		 printf("%d, ", a);
	}
	printf("98\n");
}
