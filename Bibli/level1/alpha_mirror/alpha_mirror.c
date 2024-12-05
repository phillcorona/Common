#include <unistd.h>

/**
 * Replaces each alphabetical character in the string with its opposite in
 * the alphabet (e.g., 'a' becomes 'z', 'z' becomes 'a'). Non-alphabetical
 * characters remain unchanged.
 *
 * @param s The input string to process.
 */
void alpha_mirror(char *s)
{
    char c;

    while (*s)
    {
        // Check if the character is lowercase
        if (*s >= 'a' && *s <= 'z')
            c = 'a' + 'z' - *s; // Find the opposite letter
        // Check if the character is uppercase
        else if (*s >= 'A' && *s <= 'Z')
            c = 'A' + 'Z' - *s; // Find the opposite letter
        else
            c = *s; // Keep non-alphabetical characters unchanged

        write(1, &c, 1); // Output the character
        s++; // Move to the next character
    }
}

/**
 * Main function for the program.
 * Verifies the number of arguments and calls alpha_mirror if valid.
 *
 * @param ac Argument count.
 * @param av Argument vector.
 * @return Always returns 0.
 */
int main(int ac, char **av)
{
    if (ac == 2) // Ensure there is exactly one argument
        alpha_mirror(av[1]);
    write(1, "\n", 1); // Output a newline at the end
    return 0;
}
