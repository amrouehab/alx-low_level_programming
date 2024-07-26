#include <stdio.h>
#include <stdlib.h>
#include "function_pointers.h"

/**
 * print_opcodes - Prints the opcodes of the `main` function.
 * @num_bytes: The number of bytes to print.
 */
void print_opcodes(int num_bytes)
{
    unsigned char *func_ptr;
    int i;

    func_ptr = (unsigned char *)print_opcodes;

    for (i = 0; i < num_bytes; i++)
    {
        if (i > 0)
        {
            printf(" ");
        }
        printf("%02x", func_ptr[i]);
    }
    printf("\n");
}
