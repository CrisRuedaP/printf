#ifndef PROJECT_PRINTF_H
#define PROJECT_PRINTF_H
#include <stdarg.h>
#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>


/**
 * struct type - struct
 *
 * @type: format specifier
 * @f: function associated
 */
typedef struct type
{

char *type;
int (*f)(va_list args);

} dt_t;

int d_type_c(va_list args);
int d_type_s(va_list args);
int d_type_p(va_list args);
int d_type_i(va_list args);
int _printf(const char *format, ...);
int _putchar(char c);
<<<<<<< HEAD

=======
int _strlen(char *s);
>>>>>>> cc1ba4d5b251c10053771247194cda00fa20fe0a
#endif /* project our own prinf */
