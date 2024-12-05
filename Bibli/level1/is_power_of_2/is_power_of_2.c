/**
 * is_power_of_2 - Checks if a given number is a power of 2.
 * @n: The number to check.
 * 
 * Return: 1 if the number is a power of 2, otherwise 0.
 */
int is_power_of_2(unsigned int n)
{
    if (n == 0)
        return (0);  // 0 is not a power of 2
    
    while (n > 1)
    {
		// If n is not divisible by 2 (i.e., it's odd), it's not a power of 2
        if (n % 2 != 0)
            return (0);  // If n is not divisible by 2, it's not a power of 2
        n /= 2;  // Keep dividing by 2
    }
    
    return (1);  // If we successfully divide down to 1, it is a power of 2
}


// int	main(void)
// {
// 	printf("%d\n", is_power_of_2(1024));
// 	printf("%d\n", is_power_of_2(1023));
// 	printf("%d\n", is_power_of_2(0));
// 	printf("%d\n", is_power_of_2(1));
// }