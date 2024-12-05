#include <unistd.h>

/**
 * Applies the ROT13 transformation to a string and writes the result to stdout.
 * Only alphabetic characters are transformed. Case is preserved.
 *
 * @param s The input string to transform.
 */
void rot_13(char *s)
{
    char c;

    while (*s)
    {
        if ((*s >= 'a' && *s <= 'm') || (*s >= 'A' && *s <= 'M'))
            c = *s + 13; // Shift forward by 13
        else if ((*s >= 'n' && *s <= 'z') || (*s >= 'N' && *s <= 'Z'))
            c = *s - 13; // Shift backward by 13
        else
            c = *s; // Non-alphabetic characters remain unchanged
        write(1, &c, 1);
        s++;
    }
}

/**
 * Main function for the rot_13 program.
 * If exactly one argument is provided, transforms it using ROT13 and prints it.
 * Otherwise, prints only a newline.
 *
 * @param ac Argument count.
 * @param av Argument vector.
 * @return Always returns 0.
 */
int main(int ac, char **av)
{
    if (ac == 2) // Ensure exactly one argument is provided
        rot_13(av[1]);
    write(1, "\n", 1); // Print a newline at the end
    return (0);
}
