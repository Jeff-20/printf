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
va_list print;
int b;

va_start(print, format);

b = va_arg(print, int);

write(1, &b, (strlen(format) - 1));

va_end(print);

return (0);

}
