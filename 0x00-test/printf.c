#include "main.h"
#include <stdarg.h>
#include <stdio.h>

/**
* printf - prints output to the stdout
* @format: string containing text to be written to stdout
*
* Return: total number of characters written if success.
* Otherwise a negative number.
*/

int printf(const char *format, ...)
{
va_list args;
int done;

va_start(args, format);
done = vfprintf(stdout, format, args);

va_end(args);

return (done);
}
