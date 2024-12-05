#include <unistd.h>

/**
 * Replaces occurrences of a specified character in a string with another character.
 *
 * @param s The string in which to search and replace characters.
 * @param to_find The character to find in the string.
 * @param to_replace The character that will replace `to_find` in the string.
 */
void search_and_replace(char *s, char to_find, char to_replace)
{
    while (*s)  // Loop through each character in the string
    {
        if (*s == to_find)  // If the current character matches the one to replace
            *s = to_replace;  // Replace it
        write(1, s, 1);  // Write the current character to stdout
        s++;  // Move to the next character
    }
}

/**
 * Main function for the search_and_replace program.
 * If exactly three arguments are provided, it calls search_and_replace.
 * Otherwise, it prints a newline.
 *
 * @param ac Argument count.
 * @param av Argument vector.
 * @return Always returns 0.
 */
int main(int ac, char **av)
{
    if (ac == 4)  // Ensure exactly 3 arguments (including the program name)
    {
        if (av[2][1] == '\0' && av[3][1] == '\0')  // Check if both the 2nd and 3rd args are single characters
        {
            search_and_replace(av[1], av[2][0], av[3][0]);  // Perform the search and replace
        }
    }
    write(1, "\n", 1);  // Print a newline at the end
    return (0);
}
