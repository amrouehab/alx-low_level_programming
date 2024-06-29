#include "main.h"

/**
 * fizz_buzz - Prints numbers from 1 to 100 with FizzBuzz conditions
 *
 * Return: void
 */
void fizz_buzz(void)
{
    int i;

    for (i = 1; i <= 100; i++)
    {
        if (i % 3 == 0 && i % 5 == 0)
        {
            _putchar('F');
            _putchar('i');
            _putchar('z');
            _putchar('z');
            _putchar('B');
            _putchar('u');
            _putchar('z');
            _putchar('z');
        }
        else if (i % 3 == 0)
        {
            _putchar('F');
            _putchar('i');
            _putchar('z');
            _putchar('z');
        }
        else if (i % 5 == 0)
        {
            _putchar('B');
            _putchar('u');
            _putchar('z');
            _putchar('z');
        }
        else
        {
            int num = i;
            int digits = 0;

            while (num != 0)
            {
                num /= 10;
                digits++;
            }

            num = i;
            while (digits > 0)
            {
                int divisor = 1;

                for (int j = 1; j < digits; j++)
                    divisor *= 10;

                _putchar((num / divisor) + '0');
                num %= divisor;
                digits--;
            }
        }

        if (i < 100)
            _putchar(' ');
        else
            _putchar('\n');
    }
}
