#ifndef PROJECT_PRINTF_H
#define PROJECT_PRINTF_H
#include <stdarg.h>
#include <stdlib.h>
#include <stdio.h>
#include <unistd.h> 


/**
 * struct data_type - struct
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
int d_type_d(va_list args);
int d_type_i(va_list args);
int _printf(const char *format, ...);
int _putchar(char c);
/*int _print_int(long n);*/
#endif /* project our own prinf */
