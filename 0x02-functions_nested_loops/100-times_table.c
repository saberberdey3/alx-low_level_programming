#include "main.h"

/**
 * print_times_table - prints the n times table, starting with 0
 * @n: number of the times table
 */

void print_times_table(int n)
{
    int i, j, result;
    char buffer[10];

    if (n < 0 || n > 15) {
        return;
    }

    for (i = 0; i <= n; i++) {
        for (j = 0; j <= n; j++) {
            result = i * j;
            sprintf(buffer, ", %3d", result);
            printf("%s", j == 0 ? "" : buffer);
        }
        printf("\n");
    }
}
