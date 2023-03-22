#include <stdio.h>

/**
 * main - Prints the first 98 Fibonacci numbers starting with 1 and 2
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
    unsigned long int i, prev = 1, current = 2, next;

    printf("%lu, %lu", prev, current);

    for (i = 3; i <= 98; i++)
    {
        next = prev + current;
        printf(", %lu", next);
        prev = current;
        current = next;
    }

    printf("\n");

    return (0);
}
