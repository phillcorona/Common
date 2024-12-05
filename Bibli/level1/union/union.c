#include <unistd.h>

/**
 * ft_union - Outputs the characters that appear in either of two strings
 *            without duplicates.
 * @s1: The first string to compare.
 * @s2: The second string to compare.
 * 
 * This function iterates through both strings and outputs characters that 
 * appear in either of them, ensuring that no character is repeated in the
 * output. The characters are printed in the order they appear in the input 
 * strings.
 * 
 * The function uses an array `ascii[]` to track which characters have been
 * seen already to avoid printing duplicates.
 */
void ft_union(char *s1, char *s2)
{
    int i = 0;
    int ascii[128] = {0};  // Array to track seen characters (ASCII range)
    
    // Process the first string
    while (s1[i])
    {
        if (!ascii[(int)s1[i]])  // If the character hasn't been seen
        {
            ascii[(int)s1[i]] = 1;  // Mark the character as seen
            write(1, &s1[i], 1);  // Output the character
        }
        i++;
    }

    // Process the second string
    i = 0;
    while (s2[i])
    {
        if (!ascii[(int)s2[i]])  // If the character hasn't been seen
        {
            ascii[(int)s2[i]] = 1;  // Mark the character as seen
            write(1, &s2[i], 1);  // Output the character
        }
        i++;
    }
}

/**
 * main - Entry point for the union program.
 * @ac: The number of command-line arguments.
 * @av: The array of command-line argument strings.
 * 
 * This function checks if exactly two arguments are passed to the program.
 * If so, it calls `ft_union` to print the union of the two strings without 
 * duplicates. If the number of arguments is not 2, it prints a newline and exits.
 * 
 * Return: Always returns 0.
 */
int main(int ac, char **av)
{
    // Check if there are exactly two arguments (excluding the program name)
    if (ac == 3)
    {
        ft_union(av[1], av[2]);  // Call the ft_union function with the two strings
    }

    // Print a newline at the end
    write(1, "\n", 1);
    return (0);
}
