#include <unistd.h>
#include <stdlib.h>  // Required for malloc

// Function to calculate the length of a string
int ft_strlen(char *s)
{
    int i = 0;

    // Loop through the string until we hit the null terminator
    while (s[i])
        i++;  // Increment i to count each character

    return (i);  // Return the length of the string
}

// Function to duplicate a string
char *ft_strdup(char *src)
{
    int i;
    char *new;

    // Check if the source string is NULL
    if (!src)
        return (NULL);

    // Allocate memory for the new string
    new = malloc(ft_strlen(src) + 1);  // +1 for the null terminator
    if (!new)  // Check for memory allocation failure
        return (NULL);

    // Copy each character from src to new
    i = 0;
    while (src[i])
    {
        new[i] = src[i];  // Copy the character
        i++;  // Move to the next character
    }
    
    new[i] = '\0';  // Add the null terminator at the end
    return (new);  // Return the newly allocated string
}

/*
#include <stdio.h>

int main()
{
    char *original = "Hello, world!";
    char *copy = ft_strdup(original);

    if (copy)
    {
        printf("Original: %s\n", original);
        printf("Copy: %s\n", copy);
        free(copy);  // Don't forget to free the allocated memory
    }
    else
    {
        printf("Memory allocation failed\n");
    }

    return 0;
}
*/