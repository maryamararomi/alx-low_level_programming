#include "main.h"
/**
  * print_alphabet - prints the alphabet in lowercase followed by a new line
  * Return: void
  */

void print_alphabet(void)
{
	int first = 'a';

	while (first <= 'z')
	{
		_putchar(first);
		first++;
	}
	_putchar('\n');
}
