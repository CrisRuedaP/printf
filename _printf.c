#include "holberton.h"

/**
 * _printf - function that produces output according to a format.
 * @format: a character string and char
 * @format: a character string formatt
 * Return: always 0
 */
int _printf(const char *format, ...)
{
va_list args;
int i, j, count = 0;
dt_t data[] = {
{"c", d_type_c}, {"s", d_type_s},
{"%", d_type_p}, {"d", d_type_i},
{"i", d_type_i}, {"r", d_type_r},
{NULL, NULL}
};
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
