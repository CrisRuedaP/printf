#include "holberton.h"
#include <stdio.h>
#include <stdarg.h>
#include <stdlib.h>
/**
 * _strlen - return the length of a string
 * @s: string
 * Return: result.
 */
int _strlen(const char *s)
{
int len = 0;

while (s[len] != '\0')
len++;

return (len);

}
