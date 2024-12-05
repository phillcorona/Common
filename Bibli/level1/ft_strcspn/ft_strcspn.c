#include <unistd.h>
#include <string.h> // For standard strcspn (for comparison)

size_t	ft_strcspn(const char *s, const char *reject)
{
	size_t i = 0;
	size_t j;

	while (s[i])
	{
		j = 0;
		while (reject[j])
		{
			if (s[i] == reject[j])
				return (i);
			j++;
		}
		i++;
	}
	return (i);
}
/*

int main(void)
{
    const char *s = "abcdef";
    const char *reject = "xz";

    size_t result = ft_strcspn(s, reject);
    printf("ft_strcspn: %zu\n", result);

    // Comparison with the standard strcspn
    size_t std_result = strcspn(s, reject);
    printf("standard strcspn: %zu\n", std_result);

    return 0;
}
*/
