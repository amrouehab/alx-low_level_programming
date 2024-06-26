#include "main.h"

/**
 * main - Entry point
 *
 * Return: Always 0
 */
int main(void)
{
    char text[] = "_putchar";
    int i = 0;

    while (text[i] != '\0')
    {
        _putchar(text[i]);
        i++;
    }
    _putchar('\n');

    return (0);
}
