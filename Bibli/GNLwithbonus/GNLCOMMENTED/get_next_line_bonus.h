#ifndef GET_NEXT_LINE_BONUS_H
# define GET_NEXT_LINE_BONUS_H

# include <stdio.h>
# include <unistd.h>
# include <stdlib.h>
# include <sys/types.h>
# include <sys/stat.h>
# include <fcntl.h>

# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 42
# endif

# define FD_MAX 1024

/**
 * Reads a line from the file descriptor.
 *
 * @param fd The file descriptor to read from.
 * @return A null-terminated string containing the line read or NULL if no line is left or an error occurs.
 */
char	*get_next_line(int fd);

/**
 * Copies `n` bytes from source memory area to destination memory area.
 *
 * @param dest Pointer to the destination memory area.
 * @param src Pointer to the source memory area.
 * @param n Number of bytes to copy.
 * @return The original destination pointer.
 */
void	*ft_memcpy(void *dest, const void *src, size_t n);

/**
 * Calculates the length of a string until the specified character.
 *
 * @param s The input string.
 * @param c The character to stop at.
 * @return The length of the string up to (but not including) the character `c`.
 */
size_t	ft_strlen_until(const char *s, int c);

/**
 * Creates a duplicate of a substring of the input string, up to `len` characters.
 *
 * @param s The input string.
 * @param len The number of characters to duplicate.
 * @return A newly allocated string containing the duplicated characters.
 */
char	*ft_strdup_len(const char *s, size_t len);

/**
 * Locates the first occurrence of the specified character in the string.
 *
 * @param s The input string.
 * @param c The character to find.
 * @return A pointer to the first occurrence of `c` in `s`, or NULL if not found.
 */
char	*ft_strchr(const char *s, int c);

/**
 * Joins two strings into a new string, freeing the first string.
 *
 * @param s1 The first string (will be freed).
 * @param s2 The second string.
 * @return A new string resulting from the concatenation of `s1` and `s2`.
 */
char	*ft_strjoin_and_free(char *s1, const char *s2);

#endif
