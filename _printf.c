#include "holberton.h"

/**
 * _printf - function that produces output according to a format.
 * @format: a character string formatt
 * Return: always 0
 */
int _printf(const char *format, ...)
{
va_start(args, format);
if (format == NULL)
{
return (-1);
}
i = 0;
while (format != NULL && format[i] != '\0')
{
if (format[i] == '%')
{
i++;
if (format[i] == '\0')
{
return (-1);
}
j = 0;
while (data[j].type != NULL)
{
if (*(data[j].type) == format[i])
count += data[j].f(args);
j++;
}
i++;
}
if (format[i] != '%' && format[i] != '\0')
{
count += _putchar(format[i]);
i++;
}
}
va_end(args);
return (count);
}
