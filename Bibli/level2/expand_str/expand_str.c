#include <unistd.h>

/**
 * Calculates the length of a word starting at the given pointer.
 * A word is defined as a sequence of non-whitespace characters.
 * @param str Pointer to the current position in the string.
 * @return The length of the word.
 */
int word_len(char *str)
{
    int i = 0;
    while (str[i] != '\0' && str[i] != ' ' && str[i] != '\t') // Stop at whitespace or end of string.
        ++i;
    return i;
}

/**
 * Expands the string by separating words with three spaces.
 * Consecutive spaces or tabs are ignored, and only valid words are processed.
 * @param str The input string.
 */
void expand_str(char *str)
{
    int len;
    int first_word = 1; // Tracks whether we're processing the first word.

    while (*str != '\0') // Iterate through the string until the end.
    {
        while (*str == ' ' || *str == '\t') // Skip spaces and tabs.
            ++str;
        len = word_len(str); // Calculate the length of the current word.
        if (len > 0 && first_word == 0) // Add three spaces between words, except before the first.
            write(1, "   ", 3);
        first_word = 0; // Set flag after the first word is processed.
        write(1, str, len); // Write the current word to the output.
        str = str + len; // Advance the pointer past the current word.
    }
}

/**
 * Main function to handle input and call the expand_str function.
 * @param argc Argument count.
 * @param argv Argument vector.
 * @return 0 on successful execution.
 */
int main(int argc, char **argv)
{
    if (argc == 2) // Ensure exactly one argument is provided.
        expand_str(argv[1]); // Process and expand the string.
    write(1, "\n", 1); // Add a newline at the end.
    return 0;
}
