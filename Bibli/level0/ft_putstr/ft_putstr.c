#include <unistd.h>

/**
 * Writes a string to the standard output.
 * @param str A pointer to the first character of the string.
 */
void ft_putstr(char *str)
{
    while (*str) // Loop until the null terminator is reached
    {
        write(1, str, 1); // Write the current character to standard output
        str++;            // Move to the next character
    }
}
