#include "main.h"

/**
  * _isdigit - a function that check for a digit
  * @c: input to print
  * Return: 1 if c is a digit else 0
  */
int _isdigit(int c)
{
	if ((c >= 48) && (c <= 57))
		return (1);
	else
		return (0);
}
