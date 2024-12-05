#include <unistd.h>

/**
 * str_capitalizer - Capitalizes the first letter of each word and makes others lowercase.
 * @s: The string to be modified.
 * 
 * This function modifies the input string in-place:
 * - Converts all characters to lowercase.
 * - Capitalizes the first letter of each word.
 */
void str_capitalizer(char *s)
{
    char *ptr = s;  // Pointer to traverse the string
    int first_letter = 1;  // Flag to track the start of a word

    while (*ptr)
    {
        // Convert current character to lowercase
        if (*ptr >= 'A' && *ptr <= 'Z')
            *ptr += 32;

        // Capitalize the first letter of each word
        if (first_letter && *ptr >= 'a' && *ptr <= 'z')
        {
            *ptr -= 32;
            first_letter = 0;  // Reset flag after capitalizing
        }

        // If the current character is a space or tab, the next letter is the start of a new word
        if (*ptr == ' ' || *ptr == '\t')
            first_letter = 1;

        write(1, ptr, 1);  // Print the current character
        ptr++;  // Move to the next character
    }
}

/**
 * main - Entry point of the program.
 * @ac: The number of command-line arguments.
 * @av: The array of command-line arguments.
 * 
 * This program capitalizes the first letter of each word in each argument.
 */
int main(int ac, char **av)
{
    if (ac > 1)
    {
        int i = 1;
        while (i < ac)
        {
            str_capitalizer(av[i]);  // Capitalize the argument
            write(1, "\n", 1);  // Print a newline after each argument
            i++;
        }
    }
    else
        write(1, "\n", 1);  // If no arguments, just print a newline

    return (0);  // Return 0 to indicate successful execution
}
