#include <unistd.h>
#include <stdlib.h> // For the standard atoi function

/**
 * ft_atoi - Converts a string to an integer.
 * @str: The string to convert.
 * 
 * This function handles:
 * - Leading whitespace characters (space, tab, newline, etc.).
 * - Optional '+' or '-' signs.
 * - Conversion of numeric characters into an integer.
 * 
 * Reminder:
 * Use the standard `atoi` function from <stdlib.h> for comparison.
 * Example:
 * int std_result = atoi("123"); // Converts "123" to 123 using the library function.
 * int ft_result = ft_atoi("123"); // Converts "123" to 123 using this custom function.
 * printf("Standard atoi: %d, Custom ft_atoi: %d\n", std_result, ft_result);
 * 
 * Return: The converted integer. Returns 0 if no valid conversion is possible.
 */
int	ft_atoi(const char *str)
{
	int result; // Stores the final integer result
	int sign;   // Tracks the sign of the number (+1 or -1)

	result = 0;
	sign = 1;

	// Skip leading whitespace characters (space, tabs, newlines, etc.)
	while (*str == ' ' || (*str >= 9 && *str <= 13))
		str++;

	// Check for optional '+' or '-' sign
	if (*str == '-' || *str == '+')
	{
		if (*str == '-') // If '-', set sign to -1
			sign = -1;
		str++;
	}

	// Convert numeric characters into an integer
	while (*str >= '0' && *str <= '9')
	{
		result = result * 10 + (*str - '0'); // Shift result left by one digit and add the new digit
		str++;
	}

	// Apply the sign and return the result
	return (sign * result);
}

#include <stdio.h>

int main(void)
{
    printf("%d\n", ft_atoi("   -123"));    // Output: -123
    printf("%d\n", ft_atoi("+456"));       // Output: 456
    printf("%d\n", ft_atoi("789abc"));     // Output: 789
    printf("%d\n", ft_atoi("   +0"));      // Output: 0
    printf("%d\n", ft_atoi(""));           // Output: 0
    printf("%d\n", ft_atoi("   -+42"));    // Output: 0 (invalid input)

    return 0;
}
