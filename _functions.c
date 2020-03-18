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
int n, num, len, large_num;

n = va_arg(args, int);
num = 1;
len = 0;

if (n < 0)
{
len = len + _putchar('-');
large_num = n * -1;
}
else
{
large_num = n;
}
while (large_num / num > 9)
num = num * 10;

while (num != 0)
{
len = len + _putchar('0' + large_num / num);
large_num = large_num % num;
num = num / 10;
}
return (len);
}


