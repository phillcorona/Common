#include <unistd.h>

/**
 * Skips whitespace characters (' ' or '\t') and returns the updated pointer.
 * @param str The pointer to the current position in the string.
 * @return A pointer to the first non-whitespace character.
 */
char *skip_whitespace(char *str)
{
    while (*str == ' ' || *str == '\t') // Skip spaces and tabs.
        ++str;
    return str;
}

/**
 * Calculates the length of a word starting at the given pointer.
 * Stops at whitespace or end of the string.
 * @param str Pointer to the current position in the string.
 * @return The length of the word.
 */
int ft_wordlen(char *str)
{
    int len = 0;

    while (*str != '\0' && *str != ' ' && *str != '\t') // Continue until whitespace or end.
    {
        ++len;  // Increment the length.
        ++str;  // Move the pointer forward.
    }
    return len;
}

/**
 * Removes extra spaces and prints the words separated by single spaces.
 * Uses pointers exclusively for traversal.
 * @param str The input string.
 */
void epur_str(char *str)
{
    char *ptr = str;
    int first_word = 1;
    int word_len;

    ptr = skip_whitespace(ptr); // Skip leading whitespace.
    while (*ptr != '\0')       // Process until the end of the string.
    {
        if (!first_word)       // Add a space before each word except the first.
            write(1, " ", 1);
        word_len = ft_wordlen(ptr); // Get the word length using pointer logic.
        write(1, ptr, word_len);    // Write the word to the output.
        ptr += word_len;            // Move the pointer past the current word.
        first_word = 0;             // First word has been handled.
        ptr = skip_whitespace(ptr); // Skip any trailing whitespace.
    }
}

/**
 * Main function to handle input and call the string cleaning function.
 * @param ac Argument count.
 * @param av Argument vector.
 * @return 0 on successful execution.
 */
int main(int ac, char **av)
{
    if (ac == 2)                  // Ensure exactly one argument is provided.
        epur_str(av[1]);          // Call the function to clean up and print the string.
    write(1, "\n", 1);            // Add a newline at the end.
    return 0;
}
