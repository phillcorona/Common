#include <unistd.h>

/**
 * Checks if all characters of string s1 are hidden in string s2.
 * @param s1 The string to check if it's hidden in s2.
 * @param s2 The string in which to search for the characters of s1.
 * @return void. Prints "1" if s1 is hidden in s2, "0" otherwise.
 */
void hidenp(char *s1, char *s2)
{
    // Traverse through each character of s1
    while (*s1 != '\0')
    {
        // Find the current character of s1 in s2
        while (*s2 != *s1 && *s2 != '\0')
            ++s2;

        // If we reach the end of s2 without finding the current character of s1
        if (*s2 == '\0')
        {
            write(1, "0", 1); // Print '0' if s1 is not fully found in s2
            return;
        }
        
        // Move to the next character in both s1 and s2
        ++s2;
        ++s1;
    }

    // If the loop finishes, print '1' indicating s1 is hidden in s2
    write(1, "1", 1);
}

/**
 * Main function that reads the input and calls hidenp.
 * @param argc The number of command-line arguments.
 * @param argv The command-line arguments.
 * @return 0 on success.
 */
int main(int argc, char **argv)
{
    // If exactly two arguments are passed (s1 and s2)
    if (argc == 3)
        hidenp(argv[1], argv[2]);
    
    // Always print a newline at the end
    write(1, "\n", 1);
    
    return (0);
}
