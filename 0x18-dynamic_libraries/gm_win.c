// gm_win.c
#include <stdio.h>
#include <stdlib.h>

int rand(void) {
    static int i = 0;
    // Return the winning numbers sequentially
    int winning_numbers[] = {9, 8, 10, 24, 75, 9}; // Your chosen numbers
    return winning_numbers[i++ % 6];  // Cycle through the numbers
}

