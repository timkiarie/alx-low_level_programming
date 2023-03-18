#include <stdio.h>

/**
 * main - main function
 *
 * Return: always 0
 */

int main(void)
{
	int i;
	int t;

	for (i = 0 ; i < 10 ; i++)
	{
		for (t = 1 ; t < 10 ; t++)
		{
			if (i < t && i != t)
			{
				putchar(i + '0');
				putchar(t + '0');
				if (i + t != 17)
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
