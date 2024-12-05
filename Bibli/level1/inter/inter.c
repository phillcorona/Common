#include <unistd.h>

/**
 * inter - Displays the characters that appear in both `s1` and `s2`,
 *         without duplicates, in the order they appear in `s1`.
 * @s1: The first string to compare.
 * @s2: The second string to compare.
 * 
 * This function checks each character of `s1` against all characters in `s2`,
 * and prints the first character from `s1` that appears in `s2` only once. 
 * Characters are printed in the order they appear in `s1`. If the character
 * from `s1` has already been printed (i.e., it has appeared in `s1` and `s2` before),
 * it will not be printed again.
 */
void inter(char *s1, char *s2)
{
    int i = 0;
    int j = 0;
    int ascii[128] = {0}; // To track characters already printed

    // Loop through each character of string `s1`
    while (s1[i])
    {
        j = 0;

        // Compare the current character of `s1` with each character of `s2`
        while (s2[j])
        {
            // If characters match and it's not already printed, print it
            if (s1[i] == s2[j] && !ascii[(int)s1[i]])
            {
                ascii[(int)s1[i]] = 1; // Mark the character as printed
                write(1, &s1[i], 1);    // Print the character
                break;                  // Stop checking the rest of `s2` for this character
            }
            j++;
        }
        i++;
    }
}


int main(int ac, char **av)
{
    // If the number of arguments is exactly 2, call inter function
    if (ac == 3)
    {
        inter(av[1], av[2]);
    }

    // Print a newline at the end (in case no valid input)
    write(1, "\n", 1);
    return 0;
}
