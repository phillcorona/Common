#include "get_next_line_bonus.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	unsigned char	*dst;
	unsigned char	*source;

	if (!dest && !src)
		return (NULL);
	dst = (unsigned char *)dest;
	source = (unsigned char *)src;
	while (n--)
		*dst++ = *source++;
	return (dest);
}

size_t	ft_strlen_until(const char *s, int c)
{
	size_t	len;

	len = 0;
	if (!s)
		return (0);
	while (s[len] && s[len] != c)
		len++;
	return (len);
}

char	*ft_strchr(const char *s, int c)
{
	if (!s)
		return (NULL);
	while (*s)
	{
		if (*(unsigned char *)s == (unsigned char)c)
			return ((char *)s);
		s++;
	}
	if (*(unsigned char *)s == (unsigned char)c)
		return ((char *)s);
	return (NULL);
}

char	*ft_strdup_len(const char *s, size_t len)
{
	char	*copy;
	size_t	i;

	copy = (char *)malloc(len + 1);
	if (!copy)
		return (NULL);
	i = 0;
	while (s[i] && i < len)
	{
		copy[i] = s[i];
		i++;
	}
	copy[i] = '\0';
	return (copy);
}

char	*ft_strjoin_and_free(char *s1, const char *s2)
{
	size_t	len1;
	size_t	len2;
	char	*result;

	len1 = 0;
	len2 = 0;
	if (s1)
		len1 = ft_strlen_until(s1, '\0');
	len2 = ft_strlen_until(s2, '\0');
	result = (char *)malloc(len1 + len2 + 1);
	if (!result)
		return (NULL);
	if (s1)
		ft_memcpy(result, s1, len1);
	ft_memcpy(result + len1, s2, len2);
	result[len1 + len2] = '\0';
	if (s1)
		free(s1);
	return (result);
}
