#include "main.h"

/**
 * times_table - Prints the 9 times table.
 */
void times_table(void)
{
	int i, j, product;

	for (i = 0; i <= 9; i++)
	{
		_putchar('0'); /* Print the first digit of the row */
		_putchar(',');
		_putchar(' ');

		for (j = 1; j <= 9; j++)
		{
			product = i * j;

			if (product < 10)
				_putchar(' '); /* Extra space for single-digit numbers */
			else
				_putchar((product / 10) + '0'); /* Print the first digit of the product */

			_putchar((product % 10) + '0'); /* Print the second digit of the product */

			if (j != 9)
			{
				_putchar(',');
				_putchar(' ');
			}
		}

		_putchar('\n');
	}
}

