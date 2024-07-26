#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>

/**
 * main - Prints the opcodes of its own main function.
 * @argc: Argument count.
 * @argv: Argument vector.
 * Return: Always 0 on success, 1 for argument error,
 * and 2 for negative byte count.
 */
int main(int argc, char *argv[])
{
	int i, num_bytes;
	unsigned char *main_ptr;

	/* Check if the number of arguments is correct */
	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}

	/* Convert the argument to an integer */
	num_bytes = atoi(argv[1]);

	/* Check if the number of bytes is negative */
	if (num_bytes < 0)
	{
		printf("Error\n");
		exit(2);
	}

	/* Get the pointer to the start of the main function */
	main_ptr = (unsigned char *)(uintptr_t)main;

	/* Print the opcodes in hexadecimal format */
	for (i = 0; i < num_bytes; i++)
	{
		if (i > 0)
			printf(" ");
		printf("%02x", main_ptr[i]);
	}
	printf("\n");

	return (0);
}

