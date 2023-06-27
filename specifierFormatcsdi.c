#include "main.h"
/**
 * formatsC_print - prints char in Printf
 * @arguMents: charac argument
 * Return: number of characters
 */
int formatsC_print(va_list arguMents)
{
	int charActer;

	charActer = va_arg(arguMents, int);
	return (_putchar(charActer));
}

/**
 * stringFormat_print - prints out string in print
 * @arguMents:first string argument
 * Return: number of strings involved
 */
int stringFormat_print(va_list arguMents)
{
	int jar, increa = 0;
	char *strinGs;

	jar = 0;
	strinGs = va_arg(arguMents, char *);

	if (strinGs == NULL)
		strinGs = "(null)";

	while (strinGs[jar] != '\0')
	{
		_putchar(strinGs[jar]);
		jar++;
		increa++;
	}
	return (increa);
}

/**
 * percentAge_prints - show the perCent sign whne requires
 * @arguMents: string  argument
 * Return: return the percent sing
 *
 */
int percentAge_prints(va_list arguMents)
{
	char *strinGs;

	strinGs = "%";

	if (va_arg(arguMents, int) == *strinGs)
	{
		return (*strinGs);
	}
	return (*strinGs);
}

/**
 * decimalNum_print - gives us a dDecimal or base 10
 * @arguMents: decimal argument
 * Return:Decimal
 */
int decimalNum_print(va_list arguMents)
{
	unsigned int wholeNum, autoMAtic, iNCReaments, increA;
	int numBerS;

	increA = 0;
	numBerS = va_arg(arguMents, int);

	if (numBerS < 0)
	{
		wholeNum = (numBerS * -1);
		increA += _putchar('-');
	}
	else
		wholeNum = numBerS;
	autoMAtic = wholeNum;
	iNCReaments = 1;

	while (autoMAtic > 9)
	{
		autoMAtic /= 10;
		iNCReaments *= 10;
	}
	while (iNCReaments >= 1)
	{
		increA += _putchar(((wholeNum / iNCReaments) % 10) + '0');
		iNCReaments /= 10;
	}
	return (increA);
}

/**
 * printOnly_integers - show whole numbers orinteger
 * @arguMents:argument
 * Return: success if it works
 */
int printOnly_integers(va_list arguMents)
{
	return (decimalNum_print(arguMents));
}
