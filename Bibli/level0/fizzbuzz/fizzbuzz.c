#include <unistd.h>

/**
 * Writes a single character to standard output.
 * @param c The character to write.
 */
void ft_putchar(char c)
{
    write(1, &c, 1);
}

/**
 * Writes an integer to standard output as a string.
 * @param n The integer to write. Handles edge cases for negative numbers.
 */
void ft_putnbr(long n)
{
    if (n < 0)
    {
        ft_putchar('-');
        n = -n;
    }
    if (n > 9)
        ft_putnbr(n / 10);
    ft_putchar(n % 10 + '0');
}

/**
 * Main function for the fizzbuzz program.
 * Prints numbers 1 through 100, replacing multiples of 3 with "fizz",
 * multiples of 5 with "buzz", and multiples of both with "fizzbuzz".
 */
int main(void)
{
    int i = 1;

    while (i <= 100)
    {
        if (i % 3 == 0 && i % 5 == 0)
            write(1, "fizzbuzz\n", 9);  // Grouped "fizzbuzz" string with newline
        else if (i % 3 == 0)
            write(1, "fizz\n", 5);      // Grouped "fizz" string with newline
        else if (i % 5 == 0)
            write(1, "buzz\n", 5);      // Grouped "buzz" string with newline
        else
        {
            ft_putnbr(i);
            write(1, "\n", 1);          // Add newline after the number
        }
        i++;
    }
    return 0;
}
