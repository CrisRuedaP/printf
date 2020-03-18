#include "holberton.h"

/**
 * _printf - function that produces output according to a format.
 * @format: a character string
 * Return: always 0
 */
int _printf(const char *format, ...)
{
int i, j, count = 0;
va_list args;
dt_t data_t[] = {
{"c", d_type_c}, {"s", d_type_s},
{"%", d_type_p}, {"d", d_type_i},
{"i", d_type_i}, {NULL, NULL}
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
while (data_t[j].type != NULL)
{
if (*(data_t[j].type) == format[i])
count += data_t[j].f(args);
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
