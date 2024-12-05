#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

# include <stdio.h>
# include <unistd.h>
# include <stdlib.h>
# include <sys/types.h>
# include <sys/stat.h>
# include <fcntl.h>

# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 42
# endif

char	*get_next_line(int fd);
void	*ft_memcpy(void *dest, const void *src, size_t n);
size_t	ft_strlen_until(const char *s, int c);
char	*ft_strdup_len(const char *s, size_t len);
char	*ft_strchr(const char *s, int c);
char	*ft_strjoin_and_free(char *s1, const char *s2);

#endif
