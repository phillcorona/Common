#include <unistd.h>

/**
 * Calculates the length of a string.
 *
 * @param str A pointer to the string whose length is to be calculated.
 * @return The length of the string (number of characters before the null terminator).
 */
int ft_strlen(char *str)
{
    int l;

    l = 0; // Initialize length to 0
    while (str[l]) // Increment length until the null terminator is reached
        l++;
    return (l); // Return the calculated length
}
