#include "main.h"
/**
  * print_alphabet_x10 - Prints 10 times the alphabet in lowercase
  * Return: void
  */
void print_alphabet_x10(void)
{
	int n, first;

	for (n = 0; n < 10; n++)
	{
		for (first = 'a'; first <= 'z'; first++)
		{
			_putchar(first);
		}

		_putchar('\n');
	}
}

