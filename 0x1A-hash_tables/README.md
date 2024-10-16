# Hash Tables Project

This project implements a hash table in C, following the specified requirements.

## Tasks

### Task 0: Create a Hash Table
- **File:** `0-hash_table_create.c`
- **Description:** Creates a hash table with the specified size.

### Task 1: Implement the djb2 Hash Function
- **File:** `1-djb2.c`
- **Description:** Implements the djb2 hash function.

### Task 2: Get the Index of a Key
- **File:** `2-key_index.c`
- **Description:** Gives the index of a key in the hash table.

### Task 3: Add an Element to the Hash Table
- **File:** `3-hash_table_set.c`
- **Description:** Adds an element to the hash table, handling collisions by chaining.

### Task 4: Retrieve a Value Associated with a Key
- **File:** `4-hash_table_get.c`
- **Description:** Retrieves a value associated with a key in the hash table.

### Task 5: Print a Hash Table
- **File:** `5-hash_table_print.c`
- **Description:** Prints a hash table.

### Task 6: Delete a Hash Table
- **File:** `6-hash_table_delete.c`
- **Description:** Deletes a hash table.

### Task 7: Sorted Hash Table
- **File:** `100-sorted_hash_table.c`
- **Description:** Implements a sorted hash table with additional functions for sorted operations.

## Compilation

To compile the project, use the following command:

```bash
gcc -Wall -pedantic -Werror -Wextra -std=gnu89 0-main.c 0-hash_table_create.c 1-djb2.c 2-key_index.c 3-hash_table_set.c 4-hash_table_get.c 5-hash_table_print.c 6-hash_table_delete.c 100-sorted_hash_table.c -o hash_table_test
