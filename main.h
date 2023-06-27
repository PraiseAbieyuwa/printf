#ifndef PRINT_F
#define PRINT_F
#include <limits.h>
#include <stdarg.h>
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

/**
 * struct specifier - match required functions and formats
 * @valid: pointer for formatAts
 * @f:function
 */
typedef struct specifier
{
	char *valid;
	int (*f)(va_list);
} spec;

int rot13(va_list args);
int reverse(va_list args);
int int_unsigned(va_list arguMents);
int HEX(va_list args);
int hex(va_list args);
int pointer(va_list args);
int octal(va_list args);
int formatsC_print(va_list arguMents);
int percentAge_prints(va_list arguMents);
int decimalNum_print(va_list arguMents);
int printOnly_integers(va_list arguMents);
int _putchar(char c);
int stringFormat_print(va_list arguMents);
int decimalToBinary(va_list args);
int (*linkerGet_function(char x))(va_list args);
int alt_x(unsigned long int n);
int _printf(const char *format, ...);
int _putchar(char c);
#endif
