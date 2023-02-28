#include "main.h"

/**
  * _puts - a function that print string
  * @str: output to print
  * Return: void
  */
void _puts(char *str)
{
	while (*str)
		_putchar(*str++);

	_putchar('\n');
}
