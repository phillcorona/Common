#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>

/**
 * main - Entry point for the basic calculator program.
 * @ac: Argument count.
 * @av: Argument vector.
 * 
 * Return: Always 0.
 * 
 * This program performs a basic arithmetic operation (addition, subtraction,
 * multiplication, division, or modulo) on two integers provided as arguments.
 * 
 * Usage:
 * ./program_name num1 operator num2
 * 
 * Example:
 * ./calculator 10 + 5
 * Output: 15
 */
int main(int ac, char **av)
{
    int n1 = 0;  // First operand
    int n2 = 0;  // Second operand
    int res = 0; // Result of the operation

    // Check if exactly 3 arguments are provided (program name + 3 arguments)
    if (ac == 4)
    {
        // Convert the first and third arguments to integers
        n1 = atoi(av[1]);
        n2 = atoi(av[3]);

        // Determine the operation based on the second argument (operator)
        if (av[2][0] == '+')       // Addition
            res = n1 + n2;
        else if (av[2][0] == '-')  // Subtraction
            res = n1 - n2;
        else if (av[2][0] == '*')  // Multiplication
            res = n1 * n2;
        else if (av[2][0] == '/')  // Division
            res = n1 / n2;
        else if (av[2][0] == '%')  // Modulo
            res = n1 % n2;

        // Print the result followed by a newline
        printf("%d\n", res);
    }
    else
    {
        // Print a newline if the input is invalid (not exactly 3 arguments)
        write(1, "\n", 1);
    }

    // Return 0 to indicate successful program execution
    return (0);
}
