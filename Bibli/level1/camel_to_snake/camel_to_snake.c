#include <unistd.h>
#include <stdlib.h>

/**
 * ft_putstr - Outputs a string to standard output.
 * @s: The string to print.
 */
void ft_putstr(char *s)
{
    while (*s)
        write(1, s++, 1);
}

/**
 * camel_to_snake - Converts a camelCase string to snake_case.
 * @camel: The input camelCase string.
 * 
 * Return: The converted snake_case string. Caller must free the returned string.
 */
char *camel_to_snake(char *camel)
{
    int i = 0;
    int j = 0;

    // Count the number of uppercase letters to calculate the new length
    while (camel[i])
    {
        if (camel[i] >= 'A' && camel[i] <= 'Z')
            j++;
        i++;
    }

    // Allocate memory for the new string
    char *snake = malloc(i + j + 1); // +1 for the null terminator
    if (!snake)
        return (NULL);

    // Convert camelCase to snake_case
    i = 0;
    j = 0;
    while (camel[i])
    {
        if (camel[i] >= 'A' && camel[i] <= 'Z')
        {
            snake[j++] = '_';        // Add underscore
            snake[j++] = camel[i] + 32; // Convert to lowercase
        }
        else
        {
            snake[j++] = camel[i];  // Copy other characters as-is
        }
        i++;
    }
    snake[j] = '\0'; // Null-terminate the string
    return (snake);
}

/**
 * main - Entry point for the camel_to_snake program.
 * @ac: Argument count.
 * @av: Argument vector.
 * 
 * Return: Always 0.
 */
int main(int ac, char **av)
{
    // Check if the program is given exactly one argument (besides the program name)
    if (ac == 2)
    {
        // Call camel_to_snake to convert the argument to snake_case
        char *snake = camel_to_snake(av[1]);
        
        // If camel_to_snake successfully allocated memory and returned a string
        if (snake)
        {
            // Print the converted snake_case string
            ft_putstr(snake);

            // Free the memory allocated by camel_to_snake to prevent memory leaks
            free(snake);
        }
    }

    // Print a newline at the end, regardless of the number of arguments
    write(1, "\n", 1);

    // Return 0 to indicate successful program execution
    return (0);
}

