#include <unistd.h>

/**
 * Applies the ROT1 transformation to a string and writes the result to stdout.
 * Each alphabetic character is shifted to the next in the alphabet. 
 * 'z' becomes 'a' and 'Z' becomes 'A'.
 *
 * @param s The input string to transform.
 */
void rotone(char *s)
{
    while (*s)
    {
        if ((*s >= 'a' && *s <= 'y') || (*s >= 'A' && *s <= 'Y'))
            *s += 1;  // Shift forward by 1 for characters before 'z' or 'Z'
        else if (*s == 'z')
            *s = 'a';  // Wrap around 'z' to 'a'
        else if (*s == 'Z')
            *s = 'A';  // Wrap around 'Z' to 'A'
        
        write(1, &*s, 1); // Output the transformed character
        s++;  // Move to the next character
    }
}

/**
 * Main function for the rotone program.
 * If exactly one argument is provided, transforms it using ROT1 and prints it.
 * Otherwise, prints only a newline.
 *
 * @param ac Argument count.
 * @param av Argument vector.
 * @return Always returns 0.
 */
int main(int ac, char **av)
{
    if (ac == 2)  // Ensure exactly one argument is provided
        rotone(av[1]);  // Apply ROT1 transformation
    write(1, "\n", 1);  // Print a newline at the end
    return (0);
}
