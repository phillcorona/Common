#include "get_next_line_bonus.h"

/**
 * Copies `n` bytes from source memory area to destination memory area.
 *
 * @param dest Pointer to the destination memory area.
 * @param src Pointer to the source memory area.
 * @param n Number of bytes to copy.
 * @return The original destination pointer.
 */
void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	unsigned char	*dst;
	unsigned char	*source;

	if (!dest && !src) // Handle NULL inputs
		return (NULL);
	dst = (unsigned char *)dest;
	source = (unsigned char *)src;
	while (n--) // Copy each byte
		*dst++ = *source++;
	return (dest);
}

/**
 * Calculates the length of a string until the specified character.
 *
 * @param s The input string.
 * @param c The character to stop at.
 * @return The length of the string up to (but not including) the character `c`.
 */
size_t	ft_strlen_until(const char *s, int c)
{
	size_t	len;

	len = 0;
	if (!s) // Handle NULL input
		return (0);
	while (s[len] && s[len] != c) // Increment length until `c` or null-terminator
		len++;
	return (len);
}

/**
 * Locates the first occurrence of the specified character in the string.
 *
 * @param s The input string.
 * @param c The character to find.
 * @return A pointer to the first occurrence of `c` in `s`, or NULL if not found.
 */
char	*ft_strchr(const char *s, int c)
{
	if (!s) // Handle NULL input
		return (NULL);
	while (*s) // Iterate through the string
	{
		if (*(unsigned char *)s == (unsigned char)c) // Check for character match
			return ((char *)s);
		s++;
	}
	// Check if `c` is the null-terminator
	if (*(unsigned char *)s == (unsigned char)c)
		return ((char *)s);
	return (NULL);
}

/**
 * Creates a duplicate of a substring of the input string, up to `len` characters.
 *
 * @param s The input string.
 * @param len The number of characters to duplicate.
 * @return A newly allocated string containing the duplicated characters.
 */
char	*ft_strdup_len(const char *s, size_t len)
{
	char	*copy;
	size_t	i;

	copy = (char *)malloc(len + 1); // Allocate memory for the copy
	if (!copy)
		return (NULL);
	i = 0;
	while (s[i] && i < len) // Copy up to `len` characters
	{
		copy[i] = s[i];
		i++;
	}
	copy[i] = '\0'; // Null-terminate the copied string
	return (copy);
}

/**
 * Joins two strings into a new string, freeing the first string.
 *
 * @param s1 The first string (will be freed).
 * @param s2 The second string.
 * @return A new string resulting from the concatenation of `s1` and `s2`.
 */
char	*ft_strjoin_and_free(char *s1, const char *s2)
{
	size_t	len1;
	size_t	len2;
	char	*result;

	len1 = 0;
	len2 = 0;
	if (s1)
		len1 = ft_strlen_until(s1, '\0'); // Get length of `s1`
	len2 = ft_strlen_until(s2, '\0'); // Get length of `s2`
	result = (char *)malloc(len1 + len2 + 1); // Allocate memory for the concatenated string
	if (!result)
		return (NULL);
	if (s1)
		ft_memcpy(result, s1, len1); // Copy `s1` into the result
	ft_memcpy(result + len1, s2, len2); // Copy `s2` after `s1`
	result[len1 + len2] = '\0'; // Null-terminate the result
	if (s1)
		free(s1); // Free the original `s1`
	return (result);
}
