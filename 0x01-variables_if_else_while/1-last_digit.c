#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - Entry point of the program
 *
 * Description: Generates a random number and prints the last digit.
 * Checks if the last digit is greater than 5, 0, or less than 6 and not 0.
 *
 * Return: Always 0
 */
int main(void)
{
    int n, i;

    srand(time(0));

    n = rand() - RAND_MAX / 2;

    i = n % 10;

    if (i > 5)
    {
        printf("Last digit of %d is %d and is greater than 5\n", n, i);
    }
    else if (i == 0)
    {
        printf("Last digit of %d is %d and is 0\n", n, i);
    }
    else
    {
        printf("Last digit of %d is %d and is less than 6 and not 0\n", n, i);
    }

    return (0);
}

