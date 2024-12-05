/**
 * Swaps the values of two integers whose addresses are passed as parameters.
 *
 * @param a A pointer to the first integer.
 * @param b A pointer to the second integer.
 */
void ft_swap(int *a, int *b)
{
    int t;

    t = *a;   // Store the value of the first integer in a temporary variable
    *a = *b;  // Assign the value of the second integer to the first
    *b = t;   // Assign the value of the temporary variable to the second integer
}
