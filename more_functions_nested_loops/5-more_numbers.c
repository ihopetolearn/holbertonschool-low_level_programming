#include "main.h"

/**
 * file: 5-more numbers.c
 * autho: arif paiman
*/

void more_numbers(void)
{
	int count, num;

	for (count = 1; count  <= 10; count++)
	{
	for (num = 0; num <= 14; num++)
	{
	if (num > 9)
		_putchar((num / 10) + '0');
		else
		_putchar((num % 10) +'0');
	}
		_putchar('\n');
	}
}
