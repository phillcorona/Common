#include <unistd.h>

/**
 * Calculates the length of a string.
 *
 * @param str The input string.
 * @return The length of the string.
 */
int ft_strlen(char *str)
{
    int l;

    l = 0;
    while (str[l])
        l++;
    return (l);
}

/**
 * Prints the given string in reverse order.
 *
 * @param s The input string to be reversed and printed.
 */
void rev_print(char *s)
{
    int i;

    i = ft_strlen(s) - 1; // Correctly get the length of the string and adjust for the index
    while (i >= 0)        // Loop backwards from the last character
    {
        write(1, &s[i], 1); // Print each character
        i--;
    }
}

/**
 * Main function for the rev_print program.
 * If exactly one argument is provided, prints it in reverse order.
 * Otherwise, prints only a newline.
 *
 * @param ac Argument count.
 * @param av Argument vector.
 * @return Always returns 0.
 */
int main(int ac, char **av)
{
    if (ac == 2)
        rev_print(av[1]); // Reverse and print the input string
    write(1, "\n", 1);    // Print a newline at the end
    return (0);
}
