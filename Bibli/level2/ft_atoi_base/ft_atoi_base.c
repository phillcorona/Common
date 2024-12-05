#include <stdio.h>
#include <stdlib.h>

/**
 * Checks if a character is a blank space (space, tab, etc.).
 * @param c The character to check.
 * @return 1 if the character is blank, 0 otherwise.
 */
int is_blank(char c)
{
    if (c <= 32) // ASCII values 0-32 are control characters and whitespace.
        return 1;
    return 0;
}

/**
 * Checks if a character is valid for the given base.
 * @param c The character to check.
 * @param base The base to validate against (e.g., 16 for hexadecimal).
 * @return 1 if valid, 0 otherwise.
 */
int isvalid(char c, int base)
{
    char digits[17] = "0123456789abcdef";
    char digits2[17] = "0123456789ABCDEF";

    while (base--)
    {
        if (digits[base] == c || digits2[base] == c)
            return 1;
    }
    return 0;
}

/**
 * Converts a character to its numeric value in the given base.
 * @param c The character to convert.
 * @return The numeric value of the character.
 */
int value_of(char c)
{
    if (c >= '0' && c <= '9')
        return c - '0';
    else if (c >= 'a' && c <= 'f')
        return c - 'a' + 10;
    else if (c >= 'A' && c <= 'F')
        return c - 'A' + 10;
    return 0;
}

/**
 * Converts a string to an integer in a given base.
 * @param str The input string.
 * @param str_base The base for conversion (e.g., 10 for decimal, 16 for hexadecimal).
 * @return The integer value of the string in the given base.
 */
int ft_atoi_base(const char *str, int str_base)
{
    int result = 0;
    int sign = 1;

    // Skip leading whitespace.
    while (is_blank(*str))
        str++;

    // Handle sign.
    if (*str == '-')
    {
        sign = -1;
        str++;
    }
    else if (*str == '+')
    {
        str++;
    }

    // Process characters that are valid for the given base.
    while (isvalid(*str, str_base))
    {
        result = result * str_base + value_of(*str);
        str++;
    }
    return result * sign;
}
