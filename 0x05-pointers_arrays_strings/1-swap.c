#include "main.h"

/**
  * swap_int - a function that swap the value of two integers
  * @a: first integer
  * @b: second integer
  * Return: void
  */
void swap_int(int *a, int *b)
{
	int i;

	i = *a;
	*a = *b;
	*b = i;
}
