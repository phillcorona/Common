#include <unistd.h>

/**
 * Function that reverses the case of all letters in the string.
 * It leaves non-alphabetical characters unchanged.
 *
 * @param s The string whose characters will have their case reversed.
 */
void ulstr(char *s)
{
    while (*s)  // Loop through the string
    {
        if (*s >= 'a' && *s <= 'z')  // If character is lowercase
            *s -= 32;  // Convert to uppercase
        else if (*s >= 'A' && *s <= 'Z')  // If character is uppercase
            *s += 32;  // Convert to lowercase
        
        write(1, s, 1);  // Output the character (not the pointer)
        s++;  // Move to the next character
    }
}

/**
 * Main function of the program.
 * Checks if there is exactly one argument and processes it.
 *
 * @param ac Argument count.
 * @param av Argument vector.
 * @return Always returns 0.
 */
int main(int ac, char **av)
{
    if (ac == 2)  // If there is exactly one argument
        ulstr(av[1]);  // Reverse the case of the string
    write(1, "\n", 1);  // Print a newline
    return 0;
}
