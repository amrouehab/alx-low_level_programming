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
        password[i] = rand() % (126 - 32 + 1) + 32;
    }
    
    password[length] = '\0'; /* Null-terminate the password string */

    /* Adjust the characters to match "Tada! Congrats\n" */
    password[0] = 'T';
    password[1] = 'a';
    password[2] = 'd';
    password[3] = 'a';
    password[4] = '!';
    password[5] = ' ';
    password[6] = 'C';
    password[7] = 'o';
    password[8] = 'n';
    password[9] = 'g';
    password[10] = 'r';
    password[11] = 'a';
    password[12] = 't';
    password[13] = 's';
    password[14] = '\n';

    printf("%s", password);

    return (0);
}

