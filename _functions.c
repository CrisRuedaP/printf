#include "holberton.h"

/**
 * d_type_c - function that print a char
 * @args: arguments
 * Return: 1
 */
int d_type_c(va_list args)
{
char c = 0;

c = va_arg(args, int);
_putchar(c);
return (1);
}

/**
 * d_type_s - function that print a string
 * @args: arguments
 * Return: NULL else str
 */
int d_type_s(va_list args)
{
int i = 0;
char *str;

str = va_arg(args, char*);

if (str == NULL)
str = "(null)";

while (str[i] != '\0')
{
_putchar(str[i]);
i++;
}

return (i);
}

/**
 * d_type_p - function that print a percent
 * @args: arguments
 * Return: 1
 */
int d_type_p(va_list args)
{
(void) args;
_putchar('%');

return (1);
}

/**
 * d_type_i - function that print a integers
 * @args: arguments
 * Return: number of character printed.
 */
int d_type_i(va_list args)
{
int i, num, large_num, digit, n, c = 0;
n = va_arg(args, int);

large_num = n;
if (n < 0)
{
c++;
large_num = large_num * (-1);
_putchar('-');
}

if (large_num == 0)
{
c++;
_putchar('0');
return (c);
}

i = 1;
while ((large_num / i) > 9)
{
i = (i * 10);
}

while (i > 0)
{
num = (large_num / i);
digit = (num % 10);
c++;
_putchar(digit + '0');
i = (i / 10);

}
return (c);
}
