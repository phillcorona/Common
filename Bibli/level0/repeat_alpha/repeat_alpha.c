#include <unistd.h>

/**
 * Returns the alphabetical index of a character.
 * 'a' or 'A' = 1, 'b' or 'B' = 2, ..., 'z' or 'Z' = 26.
 * Non-alphabetic characters return 0.
 *
 * @param c The character to evaluate.
 * @return The alphabetical index of the character, or 0 if not alphabetic.
 */
int get_index(char c)
{
    if (c >= 'a' && c <= 'z')
        return (c - 'a' + 1);
    if (c >= 'A' && c <= 'Z')
        return (c - 'A' + 1);
    return (0);
}

/**
 * Repeats each alphabetic character based on its alphabetical index.
 * Non-alphabetic characters are printed as-is.
 *
 * @param s The input string to process.
 */
void repeat_alpha(char *s)
{
    int loop;

    while (*s) // Iterate through the string until the null terminator
    {
        if ((*s >= 'a' && *s <= 'z') || (*s >= 'A' && *s <= 'Z'))
        {
            loop = get_index(*s); // Get the alphabetical index
            while (loop--)        // Repeat the character `loop` times
                write(1, s, 1);
        }
        else
        {
            write(1, s, 1); // Print non-alphabetic characters as-is
        }
        s++;
    }
}

/**
 * Main function for the repeat_alpha program.
 * If exactly one argument is provided, processes the string.
 * Otherwise, simply prints a newline.
 *
 * @param ac Argument count.
 * @param av Argument vector.
 * @return Always returns 0.
 */
int main(int ac, char **av)
{
    if (ac == 2)
        repeat_alpha(av[1]);
    write(1, "\n", 1); // Print a newline at the end
    return (0);
}
