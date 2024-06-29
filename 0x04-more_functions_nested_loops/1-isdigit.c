#include "main.h"

/**
 * _isdigit - Checks if a character is a digit (0 through 9)
 * @c: The character to be checked
 *
 * Return: 1 if character is a digit, 0 otherwise
 */
int _isdigit(int c)
{
    if (c >= '0' && c <= '9')
    {
        return (1);
    }
    return (0);
}
