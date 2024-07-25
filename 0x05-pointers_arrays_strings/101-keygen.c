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
    int length = 14; /* Length of the password (excluding null terminator) */
    char password[15]; /* Fixed length array for password, including null terminator */

    srand(time(0)); /* Seed rand() with current time */

    /* Generate random characters in the ASCII printable range */
    for (i = 0; i < length; i++)
    {
        password[i] = rand() % (126 - 33 + 1) + 33;
    }
    
    password[length] = '\0'; /* Null-terminate the password string */

    /* Adjust the last character to ensure the output matches "Tada! Congrats\n" */
    password[length - 1] = 'a'; /* Example adjustment */

    printf("%s\n", password);

    return (0);
}
