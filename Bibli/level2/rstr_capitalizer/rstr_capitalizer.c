#include <unistd.h>

/**
 * rstr_capitalizer - Capitalizes the first letter of each word in a string
 * and makes other letters lowercase.
 * @s: The string to be modified.
 * 
 * This function modifies the input string in-place:
 * - All letters are converted to lowercase initially.
 * - Then, it capitalizes the first letter of each word (a word is separated by space, tab, or end of string).
 */
void rstr_capitalizer(char *s)
{
    char *ptr = s;  // Pointer to traverse the string

    // First pass: convert all characters to lowercase
    while (*ptr)
    {
        if (*ptr >= 'A' && *ptr <= 'Z')
            *ptr += 32;  // Convert uppercase to lowercase
        ptr++;
    }

    // Second pass: capitalize the first letter of each word
    ptr = s;  // Reset pointer to the beginning of the string
    while (*ptr)
    {
        // Check the next character to see if it's a space, tab, or end of string
        if (*(ptr + 1) == ' ' || *(ptr + 1) == '\t' || *(ptr + 1) == '\0')
        {
            // If the current character is a lowercase letter, capitalize it
            if (*ptr >= 'a' && *ptr <= 'z')
                *ptr -= 32;
        }
        write(1, ptr, 1);  // Output the current character
        ptr++;
    }
}

/**
 * main - Entry point of the program.
 * @ac: The number of command-line arguments.
 * @av: The array of command-line arguments.
 * 
 * This program takes one or more arguments, capitalizes each word in each argument, 
 * and prints the result.
 */
int main(int ac, char **av)
{
    if (ac > 1)
    {
        int i = 1;
        while (i < ac)
        {
            rstr_capitalizer(av[i]);  // Capitalize the argument
            write(1, "\n", 1);  // Print a newline after each argument
            i++;
        }
    }
    else
        write(1, "\n", 1);  // If no arguments, just print a newline

    return (0);  // Return 0 to indicate successful execution
}
