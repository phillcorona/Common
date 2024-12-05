#include "get_next_linecommented.h"

/**
 * Extracts a single line from the buffer, removing it and keeping the remaining content.
 *
 * @param buffer A pointer to the static buffer storing the read data.
 * @return A null-terminated string containing the extracted line.
 */
static char	*ft_extract_line(char **buffer)
{
	char	*line;
	char	*remaining;
	size_t	line_len;
	size_t	total_len;

	line_len = ft_strlen_until(*buffer, '\n'); // Get length until newline
	if ((*buffer)[line_len] == '\n')
		line_len++; // Include newline in the line
	line = ft_strdup_len(*buffer, line_len); // Copy the line
	if (!line)
		return (NULL);
	total_len = ft_strlen_until(*buffer, '\0'); // Get total length of the buffer
	remaining = ft_strdup_len(*buffer + line_len, total_len - line_len + 1); // Copy remaining content
	if (!remaining)
	{
		free(line); // Free line if allocation fails
		return (NULL);
	}
	free(*buffer); // Free old buffer
	*buffer = remaining; // Update buffer to remaining content
	return (line);
}

/**
 * Reads data from the file descriptor into the buffer until a newline or EOF is found.
 *
 * @param fd The file descriptor to read from.
 * @param buffer The static buffer to store the read data.
 * @return A pointer to the updated buffer, or NULL if an error occurs.
 */
static char	*ft_read_to_buffer(int fd, char *buffer)
{
	char	*temp;
	ssize_t	bytes_read;

	bytes_read = 1;
	temp = (char *)malloc(BUFFER_SIZE + 1); // Allocate temporary buffer
	if (!temp)
		return (NULL);
	while (bytes_read > 0 && !ft_strchr(buffer, '\n')) // Read until newline or EOF
	{
		bytes_read = read(fd, temp, BUFFER_SIZE);
		if (bytes_read == 0) // EOF reached
			break ;
		if (bytes_read == -1) // Error occurred
		{
			free(temp);
			return (NULL);
		}
		temp[bytes_read] = '\0'; // Null-terminate the read data
		buffer = ft_strjoin_and_free(buffer, temp); // Append to the buffer
	}
	free(temp); // Free temporary buffer
	if (ft_strlen_until(buffer, '\0') > 0)
		return (buffer); // Return updated buffer if not empty
	return (NULL);
}

/**
 * Reads the next line from the file descriptor.
 *
 * @param fd The file descriptor to read from.
 * @return A null-terminated string containing the next line, or NULL if no line is left or an error occurs.
 */
char	*get_next_line(int fd)
{
	static char	*buffer;
	char		*line;

	if (fd < 0 || BUFFER_SIZE <= 0) // Validate input
		return (NULL);
	buffer = ft_read_to_buffer(fd, buffer); // Read data into the buffer
	if (!buffer)
		return (NULL);
	line = ft_extract_line(&buffer); // Extract a single line from the buffer
	if (!buffer[0]) // Free buffer if empty
	{
		free(buffer);
		buffer = NULL;
	}
	return (line); // Return the extracted line
}
