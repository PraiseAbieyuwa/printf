#include "main.h"
/**
 * linkerGet_function - links all the forMat specifier
 * @x: variAble to a chara
 * Return: success
 */
int (*linkerGet_function(char x))(va_list)
{
	int i = 0;

	spec arr[] = {
		{"c", formatsC_print},
		{"s", stringFormat_print},
		{"%", percentAge_prints},
		{"d", decimalNum_print},
		{"i", printOnly_integers},
		/*{"b", decimalToBinary},*/
		/*{"o", octal},*/
		/*{"p", pointer},*/
		/*{"x", hex},*/
		/*{"X", HEX},*/
		/*{"u", unsign},*/
		/*{"r", reverse},*/
		/*{"R", rot13},*/
		{NULL, NULL}
	};
	while (arr[i].valid)
	{
		if (x == arr[i].valid[0])
			return (arr[i].f);
		i++;
	}
	return (NULL);
}
