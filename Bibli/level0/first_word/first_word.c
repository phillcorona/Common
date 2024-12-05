#include <unistd.h>

/**
 * Checks if a character is a space or tab.
 * @param c The character to check.
 * @return 1 if the character is a space or tab, 0 otherwise.
 */
int is_space(char c)
{
    if (c == ' ' || c == '\t')
        return (1);
    return (0);
}

/**
 * Prints the first word of the given string to standard output.
 * A word is defined as a sequence of characters delimited by spaces or tabs.
 * @param s The input string.
 */
void first_word(char *s)
{
    // Skip leading spaces or tabs
    while (*s && is_space(*s))
        s++;
    
    // Print characters until the next space or end of string
    while (*s && !is_space(*s))
    {
        write(1, s, 1);
        s++;
    }
}

/**
 * Main function for the first_word program.
 * If exactly one argument is provided, prints the first word of the argument.
 * Otherwise, prints a newline.
 * @param ac Argument count.
 * @param av Argument vector.
 * @return Always returns 0.
 */
int main(int ac, char **av)
{
    if (ac == 2)
        first_word(av[1]);
    write(1, "\n", 1);
    return (0);
}
