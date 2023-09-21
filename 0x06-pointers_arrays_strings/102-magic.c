#include "main.h"
#include <stdio.h>
#include <ctype.h>

void print_number(int n) {
    int divisor = 1;
    int temp = n;

    if (n < 0) {
        putchar('-');
        temp = -n;
    }

    while (temp / divisor >= 10)
        divisor *= 10;

    while (divisor != 0) {
        putchar((temp / divisor) + '0');
        temp %= divisor;
        divisor /= 10;
    }
}
