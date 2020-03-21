#include <stdarg.h>
#include "holberton.h"
/**
 * d_type_r - function that prints a str in reverse
 * @arguments
 * Return: length of str
 */
int d_type_r(va_list args)
{
int i, len;
char *str;

str = va_arg(args, char *);

if (str == NULL)
str = "(null)";

len = _strlen(str);
for (i = len - 1; i >= 0; i--)
{
_putchar(str[i]);
}
return (len);
}
