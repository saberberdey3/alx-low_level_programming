#include "main.h"

/**
* main - Prints the first 98 Fibonacci numbers,
*starting with 1 and 2, followed by a new line.
*
* Return: Always 0.
*/

int main(void)
{
    int i;
    unsigned long int a1 = 0, a2 = 1, b1 = 0, b2 = 2, c;

    for (i = 0; i < 98; i++)
    {
        if (i == 0)
            printf("%lu", a2);
        else
            printf("%lu", b2);

        if (i != 97)
            printf(", ");

        c = b1 + b2;
        b1 = a2;
        a2 = b2;
        b2 = c;
    }
    printf("\n");

    return (0);
}
