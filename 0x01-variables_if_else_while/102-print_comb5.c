#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int firstNum;
	int secondNum;

	for (firstNum = 0; firstNum <= 99; firstNum++)
	{
		for (secondNum = firstNum + 1; secondNum <= 99; secondNum++)
		{
			putchar(firstNum / 10 + '0');
			putchar(firstNum % 10 + '0');
			putchar(' ');
			putchar(secondNum / 10 + '0');
			putchar(secondNum % 10 + '0');

			if (firstNum != 98 || secondNum != 99)
			{
				putchar(',');
				putchar(' ');
			}
		}
	}

	putchar('\n');

	return (0);
}
