#include <unistd.h>

/**
 * ft_atoi - Converts a string to an integer.
 * @str: The string to be converted to an integer.
 * 
 * This function converts a string representation of a number into an integer.
 * It assumes that the string contains only valid digits.
 */
int ft_atoi(char *str)
{
    int n = 0;

    // Loop through each character in the string
    while (*str != '\0')
    {
        // Multiply the current number by 10 and add the value of the current digit
        n = n * 10;
        n = n + *str - '0';  // Convert the character to an integer (e.g., '0' to 0, '1' to 1)
        ++str;  // Move to the next character
    }
    return (n);  // Return the final converted integer
}

/**
 * print_hex - Prints the hexadecimal representation of a number.
 * @n: The integer to be printed in hexadecimal form.
 * 
 * This function recursively prints the hexadecimal digits of the integer.
 * It prints the number in base 16 using the characters '0'-'9' and 'a'-'f'.
 */
void print_hex(int n)
{
    // Array of characters representing the hexadecimal digits
    char hex_digits[] = "0123456789abcdef";

    // If n is 16 or greater, recursively print the higher order hexadecimal digits
    if (n >= 16)
        print_hex(n / 16);  // Recursively call to print the upper digits

    // Write the current hexadecimal digit to the standard output
    write(1, &hex_digits[n % 16], 1);  // Output the current digit (n % 16 gives the remainder)
}

/**
 * main - The entry point of the program.
 * @argc: The number of command-line arguments.
 * @argv: The array of command-line arguments.
 * 
 * This program reads a string representing a number from the command-line arguments,
 * converts it to an integer using ft_atoi, and prints its hexadecimal representation
 * using print_hex.
 */
int main(int argc, char **argv)
{
    // If exactly one argument is provided (excluding the program name)
    if (argc == 2)
        print_hex(ft_atoi(argv[1]));  // Convert the argument to an integer and print its hexadecimal form

    // Print a newline at the end
    write(1, "\n", 1);

    return (0);  // Return 0 to indicate successful execution
}
