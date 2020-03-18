#include "holberton.h"

/**
 * _printf - function that produces output according to a format.
 * @format: a character string
 * Return: always 0
 */
int _printf(const char *format, ...)
{
	va_list args;
	int i = 0, j, count = 0;

	dt_t data_t[] = {
	{"c", d_type_c}, {"s", d_type_s},
	{"%", d_type_p}, {"d", d_type_i},
	{"i", d_type_i}, {NULL, NULL},
	};

	va_start(args, format);
	if (format == NULL)
	{
		return (-1);
	}

	while (format != '\0' && format[i] != '\0')
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
				if (format[i] == *(data_t[j].type))
				{
				count += data_t[j].f(args);
				j++;
				}
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
