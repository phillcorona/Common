/**
 * Copies the string pointed to by s2 (including the null terminator) 
 * into the buffer pointed to by s1.
 * 
 * @param s1 The destination buffer where the string is copied.
 * @param s2 The source string to copy.
 * @return A pointer to the destination string (s1).
 */
char *ft_strcpy(char *s1, char *s2)
{
    int i;

    i = 0;
    while (s2[i]) // Copy characters from s2 to s1 until the null terminator
    {
        s1[i] = s2[i];
        i++;
    }
    s1[i] = '\0'; // Add the null terminator to s1
    return (s1);  // Return the destination string
}
