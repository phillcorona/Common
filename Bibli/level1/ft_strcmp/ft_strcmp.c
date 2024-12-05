/**
 * ft_strcmp - Compares two strings lexicographically.
 * @s1: The first string to compare.
 * @s2: The second string to compare.
 *
 * This function compares the two strings character by character using array 
 * indexing. It stops when a difference is found or when one of the strings 
 * reaches its null terminator ('\0').
 *
 * Return:
 * - The difference between the ASCII values of the first differing characters.
 * - Zero if the strings are identical.
 */
int ft_strcmp(char *s1, char *s2)
{
    int i;

    i = 0;
    // Loop until a difference is found or the end of one string is reached
    while (s1[i] == s2[i] && s1[i] != '\0' && s2[i] != '\0')
    {
        i++; // Move to the next character in both strings
    }
    // Return the difference between the first non-matching characters
    return (s1[i] - s2[i]);
}
/**
 * ft_strcmp - Compares two strings lexicographically.
 * @s1: The first string to compare.
 * @s2: The second string to compare.
 *
 * This function compares the two strings character by character using pointer 
 * arithmetic. It stops when a difference is found or when one of the strings 
 * reaches its null terminator ('\0').
 *
 * Return:
 * - The difference between the ASCII values of the first differing characters.
 * - Zero if the strings are identical.
 */
int ft_strcmp(char *s1, char *s2)
{
    // Loop until a difference is found or the end of one string is reached
    while (*s1 && *s1 == *s2)
    {
        s1++; // Move the pointer to the next character in s1
        s2++; // Move the pointer to the next character in s2
    }
    // Return the difference between the first non-matching characters
    return (*s1 - *s2);
}
