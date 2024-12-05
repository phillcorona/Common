#include "get_next_line.h"

static char	*ft_extract_line(char **buffer)
{
	char	*line;
	char	*remaining;
	size_t	line_len;
	size_t	total_len;

	line_len = ft_strlen_until(*buffer, '\n');
	if ((*buffer)[line_len] == '\n')
		line_len++;
	line = ft_strdup_len(*buffer, line_len);
	if (!line)
		return (NULL);
	total_len = ft_strlen_until(*buffer, '\0');
	remaining = ft_strdup_len(*buffer + line_len, total_len - line_len + 1);
	if (!remaining)
	{
		free(line);
		return (NULL);
	}
	free(*buffer);
	*buffer = remaining;
	return (line);
}

static char	*ft_read_to_buffer(int fd, char *buffer)
{
	char	*temp;
	ssize_t	bytes_read;

	bytes_read = 1;
	temp = (char *)malloc(BUFFER_SIZE + 1);
	if (!temp)
		return (NULL);
	while (bytes_read > 0 && !ft_strchr(buffer, '\n'))
	{
		bytes_read = read(fd, temp, BUFFER_SIZE);
		if (bytes_read == 0)
			break ;
		if (bytes_read == -1)
		{
			free(temp);
			return (NULL);
		}
		temp[bytes_read] = '\0';
		buffer = ft_strjoin_and_free(buffer, temp);
	}
	free(temp);
	if (ft_strlen_until(buffer, '\0') > 0)
		return (buffer);
	return (NULL);
}

char	*get_next_line(int fd)
{
	static char	*buffer;
	char		*line;

	if (fd < 0 || BUFFER_SIZE <= 0)
		return (NULL);
	buffer = ft_read_to_buffer(fd, buffer);
	if (!buffer)
		return (NULL);
	line = ft_extract_line(&buffer);
	if (!buffer[0])
	{
		free(buffer);
		buffer = NULL;
	}
	return (line);
}
