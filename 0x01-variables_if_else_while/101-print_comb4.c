#include <stdio.h>
/**
  * main - Prints all possible different combinations of three digits
  * Return: Always 0
  */
int main(void)
{
	int n1, n2, n3, n4, n5;

	n1 = 0, n2 = 0, n3 = 1;
	while (n1 < 8)
	{
		n2++;
		n4 = n2;
		while (n4 < 9)
		{
			n3++;
			n5 = n3;
			while (n5 <= 9)
			{
				putchar(n1 + '0');
				putchar(n4 + '0');
				putchar(n5 + '0');
				if (n1 == 7)
					putchar('\n');
				else
				{
					putchar(',');
					putchar(' ');
				}
				n5++;
			}
			n4++;
		}
		n1 = n1 + 1;
	}
	return (0);
}
