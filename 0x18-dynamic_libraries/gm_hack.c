// gm_hack.c
#include <stdio.h>

int rand(void) {
    static int i = 0;
    int nums[] = {9, 8, 10, 24, 75, 9}; // Winning numbers
    return nums[i++ % 6];
}

