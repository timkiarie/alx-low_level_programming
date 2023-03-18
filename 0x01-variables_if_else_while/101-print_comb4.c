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
        int k;

	for (i = 0 ; i < 10 ; i++)
	{
		for (t = 1 ; t < 10 ; t++)
		{
			for (k = 2 ; k < 10 ; k++)
			{
				if (i < t && t < k)
				{
					putchar(i + '0');
					putchar(t + '0');
					putchar(k + '0');
					if (i + t + k != 24)
					{
						putchar(',');
						putchar(' ');
					}
				}
			}
		}	
	}
	putchar('\n');
	return (0);
}
