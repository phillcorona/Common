#include <unistd.h>

/**
 * Converts a numeric string to an integer.
 * Handles only positive numbers; stops at the first non-digit character.
 * @param str The input string to convert.
 * @return The converted integer.
 */
int ft_atoi(char *str)
{
    int n = 0;

    while (*str >= '0' && *str <= '9') // Check for numeric characters.
    {
        n *= 10;          // Shift digits left.
        n += *str - '0';  // Convert character to digit and add.
        ++str;            // Move to the next character.
    }
    return n;
}

/**
 * Writes an integer to the standard output.
 * Handles positive integers only.
 * @param n The number to write.
 */
void ft_putnbr(int n)
{
    char c;

    if (n >= 10)           // Handle higher digits.
        ft_putnbr(n / 10); // Recursive call to handle all digits except the last.
    c = (n % 10) + '0';    // Convert last digit to a character.
    write(1, &c, 1);       // Write the digit to standard output.
}

/**
 * Checks if a number is a prime number.
 * @param n The number to check.
 * @return 1 if the number is prime, 0 otherwise.
 */
int is_prime(int n)
{
    int i = 2;

    if (n < 2)             // Handle edge cases where n < 2.
        return 0;
    while (i < n)          // Iterate to check divisors.
    {
        if (n % i == 0)    // Found a divisor, not prime.
            return 0;
        ++i;
    }
    return 1;              // No divisors found, number is prime.
}

/**
 * Computes the sum of all prime numbers less than or equal to n.
 * @param n The upper limit for the sum.
 * @return The sum of prime numbers.
 */
int add_prime_sum(int n)
{
    int sum = 0;
    int i = 2;

    while (i <= n)         // Iterate over all numbers up to n.
    {
        if (is_prime(i))   // Add to sum if the number is prime.
            sum += i;
        ++i;
    }
    return sum;
}

/**
 * Main function to handle input and output.
 * Checks argument validity and computes the sum of primes.
 * @param ac Argument count.
 * @param av Argument vector.
 * @return 0 on successful execution.
 */
int main(int ac, char **av)
{
    int n;

    if (ac == 2 && (n = ft_atoi(av[1])) > 0) // Ensure valid positive integer input.
        ft_putnbr(add_prime_sum(n));         // Compute and display the sum of primes.
    else
        ft_putnbr(0);                        // Invalid input, display 0.
    write(1, "\n", 1);                       // Append a newline to the output.
    return 0;
}
