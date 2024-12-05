#include <stdio.h>
#include <stdlib.h>

/**
 * pgcd - Calculates the greatest common divisor (GCD) of two integers.
 * @a: The first integer.
 * @b: The second integer.
 * 
 * This function uses the Euclidean algorithm to find the GCD of a and b.
 * The recursion continues until b is zero, at which point a is the GCD.
 */
int pgcd(int a, int b)
{
    // Base case: if b is 0, return a as the GCD
    if (b == 0)
        return (a);
    else
        // Recursively call with b and the remainder of a divided by b
        return (pgcd(b, a % b));
}

/**
 * main - The entry point of the program.
 * @ac: The number of command-line arguments.
 * @av: The array of command-line arguments.
 * 
 * The main function reads two numbers from the command-line arguments,
 * calculates their GCD using the pgcd function, and prints the result.
 */
int main(int ac, char **av)
{
    // Check if exactly two arguments (besides the program name) are provided
    if (ac == 3)
    {
        // Convert the arguments to integers
        int a = atoi(av[1]);
        int b = atoi(av[2]);
        
        // Check if both numbers are non-negative
        if (a >= 0 && b >= 0)
            // Calculate and print the GCD
            printf("%d", pgcd(a, b));
    }
    // Print a newline after the output
    printf("\n");
    return (0);
}
