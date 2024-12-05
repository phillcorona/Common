#include <stdio.h>
#include <stdlib.h>

/**
 * Computes the absolute value of an integer.
 * @param n The input number.
 * @return The absolute value of the number.
 */
int abso_nbr(int n)
{
    if (n < 0)
        return (-n);
    return (n);
}

/**
 * Creates a range of integers between `start` and `end` inclusive, in reverse order.
 * @param start The starting number of the range.
 * @param end The ending number of the range.
 * @return A pointer to the dynamically allocated array of integers, or NULL on failure.
 */
int *ft_rrange(int start, int end)
{
    int size = abso_nbr(start - end) + 1;
    int *range = malloc(size * sizeof(int)); // Allocate memory for the range.
    if (!range)
        return (NULL); // Return NULL if memory allocation fails.

    int i = 0;
    while (i < size)
    {
        if (end >= start)
            range[i] = end - i; // Decrement for descending range.
        else
            range[i] = end + i; // Increment for ascending range.
        i++;
    }
    return (range); // Return the pointer to the array.
}

int main()
{
    // Test with an ascending range
    int start = 1, end = 5;
    int *range = ft_rrange(start, end);
    if (range)
    {
        for (int i = 0; i < abso_nbr(start - end) + 1; i++)
            printf("%d ", range[i]);
        printf("\n");
        free(range); // Free the allocated memory.
    }

    // Test with a descending range
    start = 5, end = 1;
    range = ft_rrange(start, end);
    if (range)
    {
        for (int i = 0; i < abso_nbr(start - end) + 1; i++)
            printf("%d ", range[i]);
        printf("\n");
        free(range); // Free the allocated memory.
    }

    return 0;
}
