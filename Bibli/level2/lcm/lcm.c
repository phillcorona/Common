#include <stdio.h>

/**
 * Calculates the greatest common divisor of two unsigned integers.
 * @param a The first number.
 * @param b The second number.
 * @return The greatest common divisor of a and b.
 */
unsigned int gcd(unsigned int a, unsigned int b)
{
    while (b != 0)
    {
        unsigned int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

/**
 * Calculates the least common multiple of two unsigned integers.
 * @param a The first number.
 * @param b The second number.
 * @return The least common multiple of a and b, or 0 if any number is 0.
 */
unsigned int lcm(unsigned int a, unsigned int b)
{
    if (a == 0 || b == 0)
        return 0; // LCM is undefined when one of the numbers is 0.

    return (a * b) / gcd(a, b); // Use the LCM and GCD relationship.
}

//--------------------------------------------------------------
// #include <stdio.h>

// int main(void)
// {
//     printf("%u\n", lcm(0, 5)); // Test case
//     printf("%u\n", lcm(12, 18)); // Test case
//     printf("%u\n", lcm(7, 5)); // Test case
//     return 0;
// }
