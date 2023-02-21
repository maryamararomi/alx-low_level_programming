#include <stdio.h>
#include "main.h"
/**
  * main - Prints the alphabet in lowercase
  * Return: Always 0
  */

int main(void)
{
	char first;

	first = 'a';

	while (first <= 'z')
	{
		_putchar (first);
		first++;
	}
	_putchar ('\n');
	return (0);
}
