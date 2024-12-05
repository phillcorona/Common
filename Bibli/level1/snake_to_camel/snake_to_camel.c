#include <unistd.h>
#include <stdlib.h>

/**
 * ft_putstr - Writes a string to standard output.
 * @s: The string to write.
 * 
 * This function outputs the string `s` character by character to the standard
 * output using the `write` system call.
 */
void ft_putstr(char *s)
{
    while (*s)
    {
        write(1, &*s, 1);
        s++;
    }
}

/**
 * snake_to_camel - Converts a string from snake_case to lowerCamelCase.
 * @snake: The input string in snake_case format.
 * 
 * This function converts the given snake_case string `snake` into a string 
 * in lowerCamelCase format by removing underscores and capitalizing the 
 * letter following each underscore.
 * 
 * Return: A dynamically allocated string in lowerCamelCase format.
 *         NULL if memory allocation fails.
 */
char *snake_to_camel(char *snake)
{
    int i = 0;
    int j = 0;

    // Count the length of the new string without underscores
    while (snake[i])
    {
        if (snake[i] == '_')
        {
            j++;  // Skip the underscore
            if (snake[i + 1] >= 'a' && snake[i + 1] <= 'z')
                snake[i + 1] -= 32; // Capitalize the character after '_'
        }
        i++;
    }

    // Allocate memory for the resulting string (excluding underscores)
    char *camel = malloc(i - j + 1);
    if (!camel)
        return (NULL);

    i = 0;
    j = 0;
    while (snake[i])
    {
        if (snake[i] != '_')
            camel[j++] = snake[i]; // Copy the character, skipping underscores
        i++;
    }

    camel[j] = '\0';
    return (camel);
}

/**
 * main - Entry point for the snake_to_camel program.
 * @ac: Argument count.
 * @av: Argument vector.
 * 
 * This function checks if the program is given exactly one argument.
 * If so, it calls the snake_to_camel function to convert the argument
 * to lowerCamelCase and then prints the result to the standard output.
 * 
 * Return: Always 0.
 */
int main(int ac, char **av)
{
    if (ac == 2)
    {
        char *camel = snake_to_camel(av[1]);
        ft_putstr(camel);
        free(camel);
    }
    write(1, "\n", 1);
    return (0);
}
