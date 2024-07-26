#ifndef VARIADIC_FUNCTIONS_H
#define VARIADIC_FUNCTIONS_H

#include <stdarg.h>

/* Define NULL if not defined */
#ifndef NULL
#define NULL ((void *)0)
#endif

int _putchar(char c);
int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);
void print_all(const char * const format, ...);
void print_number(int num);
void print_float(double num);

#endif /* VARIADIC_FUNCTIONS_H */

