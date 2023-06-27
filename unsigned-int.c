#include "main.h"
/**
 * int_unsigned - givesunsigned  integer
 * @arguMents: argument
 * Return: i
 */
int int_unsigned(va_list arguMents)
{
	unsigned int nuMBers = va_arg(arguMents, unsigned int);
	int num, endOf = nuMBers % 10, numBering1, raisedTo = 1;
	int  ink = 1;

	nuMBers = nuMBers / 10;
	num = nuMBers;

	if (endOf < 0)
	{
		_putchar('-');
		num = -num;
		nuMBers = -nuMBers;
		endOf = -endOf;
		ink++;
	}
	if (num > 0)
	{
		while (num / 10 != 0)
		{
			raisedTo = raisedTo * 10;
			num = num / 10;
		}
		num = nuMBers;
		while (raisedTo > 0)
		{
			numBering1 = num / raisedTo;
			_putchar(numBering1 + '0');
			num = num - (numBering1 * raisedTo);
			raisedTo = raisedTo / 10;
			ink++;
		}
	}
	_putchar(endOf + '0');

	return (ink);
}
