#include "main.h"
/**
  * _isalpha - Checks for alphabetical character
  * @c: character to check
  * Return: 1 if c is aletter, lowercase or uppercase else 0
  */
int _isalpha(int c)

{
	if ((c >= 'A') && (c <= 'Z'))
		return (1);
	else
		return (0);
}



