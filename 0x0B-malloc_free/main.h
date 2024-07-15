#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>
#include <stdlib.h>

/* Task 0: create_array.c */
char *create_array(unsigned int size, char c);

/* Task 1: strdup.c */
char *_strdup(char *str);

/* Task 2: str_concat.c */
char *str_concat(char *s1, char *s2);

/* Task 3: alloc_grid.c */
int **alloc_grid(int width, int height);

/* Task 4: free_grid.c */
void free_grid(int **grid, int height);

#endif /* MAIN_H */

