#include "main.h"

/**
 * print_square - function that prints a square
 * @size: size of square
 * Return: square made of '#'
 */
void print_square(int size)
{
	int co, ko;

	if (size <= 0)
	{
		_putchar('\n');
	}

	else
	{
		for (co = 1; co <= size; co++)
		{
			_putchar('#');

			for (ko = 2; ko <= size; ko++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
}
