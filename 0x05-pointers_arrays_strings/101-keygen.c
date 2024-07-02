#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
    int i;
    int length = 10; // Length of the password
    char password[length + 1]; // +1 for null terminator

    srand(time(0)); // Seed rand() with current time

    // Generate random characters in the ASCII printable range
    for (i = 0; i < length; i++)
    {
        password[i] = rand() % (126 - 33 + 1) + 33;
    }
    
    password[length] = '\0'; // Null-terminate the password string

    printf("%s\n", password);

    return (0);
}
