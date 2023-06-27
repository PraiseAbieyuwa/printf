#include "main.h"
/**
 * _printf - create own printf for task 0x11
 * @format:second parameter
 * Return: num of char
 */
int _printf(const char *format, ...)
{
	if (format != NULL)
	{
		int increAment = 0, m;
		int (*lenGth)(va_list);
		va_list arguMeNts;

		va_start(arguMeNts, format);
		m = 0;

		if (format[0] == '%' && format[1] == '\0')
			return (-1);
		while (format != NULL && format[m] != '\0')
		{
			if (format[m] == '%')
			{
				if (format[m + 1] == '%')
				{
					increAment += _putchar(format[m]);
					m += 2;
				}
				else
				{
					lenGth = linkerGet_function(format[m + 1]);
					if (lenGth)
						increAment += lenGth(arguMeNts);
					else
						increAment = _putchar(format[m]) + _putchar(format[m + 1]);
					m += 2;
				}
			}
			else
			{
				increAment += _putchar(format[m]);
				m++;
			}
		}
		va_end(arguMeNts);
		return (increAment);
	}
	return (-1);
}
