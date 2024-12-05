#include <unistd.h>

/**
 * ft_putnbr - Prints an integer n to the standard output.
 * @n: The integer to be printed.
 *
 * This function converts an integer to its string representation and
 * prints each digit one by one using recursion.
 */
void ft_putnbr(int n)
{
    char digit;

    // If n is 10 or greater, recursively print the higher order digits first
    if (n >= 10)
        ft_putnbr(n / 10);  // Recursive call to print all digits except the last

    // Convert the last digit of n to a character and write it to stdout
    digit = (n % 10) + '0';  // Get the last digit and convert it to a character
    write(1, &digit, 1);      // Output the digit
}

/**
 * main - The main entry point of the program.
 * @ac: The number of command-line arguments.
 * @av: The list of command-line arguments.
 *
 * The main function calculates the number of arguments (excluding the program name)
 * and prints it using the ft_putnbr function.
 */
int main(int ac, char **av)
{
    (void)av;  // Silence the 'unused parameter' warning for av

    // Call ft_putnbr to print the number of arguments excluding the program name
    ft_putnbr(ac - 1);  // ac - 1 gives the number of arguments excluding the program name
    write(1, "\n", 1);   // Print a newline after the number

    return (0);  // Return 0 to indicate successful execution
}
