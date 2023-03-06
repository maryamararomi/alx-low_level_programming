#include "main.h"

/**
  * _memset - a function that fills memory with a constant byte
  * @s: memory area to fill
  * @b: constant byte to fill
  * @n: byte of memory area to fill
  * Return: a pointer to the memory area s
  */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int a;

	for (a = 0; a < n; a++)
	{
		s[a] = b;
	}
	return (s);
}
