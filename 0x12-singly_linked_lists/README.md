# Singly Linked Lists

This project involves creating and manipulating singly linked lists in C. The tasks include:

1. Printing all elements of a list.
2. Finding the length of a list.
3. Adding a new node at the beginning of a list.
4. Adding a new node at the end of a list.
5. Freeing all nodes in a list.

## Requirements

- Allowed editors: vi, vim, emacs
- Compilation: gcc -Wall -Werror -Wextra -pedantic -std=gnu89
- Code must use the Betty style
- No use of global variables
- No more than 5 functions per file
- Allowed standard library functions: `malloc`, `free`, `exit`
- Use `_putchar` function for output

## Data Structure

```c
/**
 * struct list_s - singly linked list
 * @str: string - (malloc'ed string)
 * @len: length of the string
 * @next: points to the next node
 *
 * Description: singly linked list node structure
 */
typedef struct list_s
{
    char *str;
    unsigned int len;
    struct list_s *next;
} list_t;

