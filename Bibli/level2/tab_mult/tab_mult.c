#include <unistd.h>

/**
 * ft_putchar - Writes a single character to standard output.
 * @c: The character to write.
 */
void ft_putchar(char c)
{
    write(1, &c, 1);
}

/**
 * ft_putstr - Writes a string to standard output.
 * @str: The string to write.
 */
void ft_putstr(char *str)
{
    while (*str)
    {
        write(1, str, 1);
        str++;
    }
}

/**
 * ft_putnbr - Writes a number to standard output.
 * @n: The number to write.
 * 
 * This function handles negative numbers and prints the digits of the number.
 */
void ft_putnbr(int n)
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
 * ft_atoi - Converts a string to an integer.
 * @str: The string to convert.
 * 
 * This function handles optional leading spaces, signs, and converts 
 * numeric characters to an integer.
 */
int ft_atoi(char *str)
{
    int r = 0;
    int sg = 1;

    while (*str == ' ' || *str == '\t')
        str++;
    if (*str == '-' || *str == '+')
    {
        if (*str == '-')
            sg = -1;
        str++;
    }
    while (*str >= '0' && *str <= '9')
    {
        r = r * 10 + (*str - '0');
        str++;
    }
    return (sg * r);
}

/**
 * tab_mult - Prints the multiplication table for a given number.
 * @n: The number to create the multiplication table for.
 * 
 * This function prints the multiplication table for numbers 1 through 9.
 */
void tab_mult(int n)
{
    int i = 1;
    while (i <= 9)
    {
        ft_putnbr(i);
        ft_putstr(" x ");
        ft_putnbr(n);
        ft_putstr(" = ");
        ft_putnbr(i * n);
        ft_putstr("\n");
        i++;
    }
}

/**
 * main - Entry point of the program.
 * @ac: The number of command-line arguments.
 * @av: The array of command-line arguments.
 * 
 * This program checks for a valid integer input and prints the multiplication 
 * table for that number.
 */
int main(int ac, char **av)
{
    if (ac == 2)
    {
        int n = ft_atoi(av[1]);
        if (n > 0)  // Ensure the input is a positive number
            tab_mult(n);
    }
    else
        write(1, "\n", 1);  // If no argument is provided, just print a newline
    return 0;
}
