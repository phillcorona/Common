#include <unistd.h>

/**
 * is_space - Checks if a character is a space or a tab.
 * @c: The character to check.
 * 
 * Return: 1 if the character is a space or tab, otherwise 0.
 */
int is_space(char c)
{
    if (c == ' ' || c == '\t')  // Checks for space or tab
        return (1);
    return (0);
}

/**
 * count_words - Counts the number of words in a string.
 * A word is defined as a sequence of non-space characters.
 * @s: The string to process.
 * 
 * Return: The number of words in the string.
 */
int count_words(char *s)
{
    int count = 0;

    // Iterate over each character in the string
    while (*s)
    {
        // If the character is not a space, it's the start of a word
        if (!is_space(*s))
        {
            count++;
            // Move the pointer past the word
            while (*s && !is_space(*s))
                s++;
        }
        else
            s++;  // Skip spaces/tabs
    }
    return (count);
}

/**
 * last_word - Prints the last word from a string.
 * A word is defined as a sequence of non-space characters.
 * @s: The string to process.
 * 
 * Return: 0 (indicates function's task is complete).
 */
int last_word(char *s)
{
    int count = 0;
    int last = count_words(s);  // Get total number of words
    char *last_word_start = NULL;
    // Skip leading spaces
    while (is_space(*s))
        s++;
    // Traverse the string and look for the last word
    while (*s)
    {
        // If we find a non-space character, we're at the start of a word
        if (!is_space(*s))
        {
            // Mark the start of the last word
            if (!last_word_start)
                last_word_start = s;
            // Skip to the end of the current word
            while (*s && !is_space(*s))
                s++;
        }
        else
        {
            s++;  // Skip over spaces/tabs
        }
    }
    // If last_word_start is not NULL, print the last word
    if (last_word_start)
        write(1, last_word_start, s - last_word_start);
    return (0);
}

/**
 * main - Entry point for the program.
 * @ac: Argument count.
 * @av: Argument vector.
 * 
 * Return: Always 0.
 */
int main(int ac, char **av)
{
    if (ac == 2)  // If exactly one argument is passed
    {
        last_word(av[1]);  // Call function to print last word
    }

    write(1, "\n", 1);  // Print a newline at the end
    return (0);
}
