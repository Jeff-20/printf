#include "main.h"
#include <stdarg.h>
#include <stdio.h>
#include <unistd.h>
#include <string.h>

/**
* _printf - function that produces output according to a format
* @format: character string
*
* Return: number of characters printed
* excluding the null byte used to end output to strings
*/

int _printf(const char *format, ...)
{
int (*prin)(const char *format, ...) = &printf;

va_list print;
double b;
unsigned int l = 0;

va_start(print, format);

b = va_arg(print, int);

prin(format);

write(1, &b, 1);

va_end(print);

while (*format != '\0')
{
l = strlen(format);
l++;
format++;
}

return (l);

}
