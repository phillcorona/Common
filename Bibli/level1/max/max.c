#include <stdio.h>

/**
 * max - Finds the largest number in an array.
 * @tab: The array of integers.
 * @len: The number of elements in the array.
 * 
 * Return: The largest number in the array. If the array is empty, returns 0.
 */
int max(int* tab, unsigned int len)
{
    if (len == 0)  // If the array is empty, return 0
        return 0;

    int max = tab[0];  // Start with the first element as the maximum
    unsigned int i = 1;  // Start the loop from the second element

    while (i < len)
    {
        if (tab[i] > max)
            max = tab[i];  // Update max if a larger element is found
        i++;
    }

    return max;  // Return the largest number found
}
#include <stdio.h>

int main(void)
{
    int arr[] = {1, 2, 3, 4, 5};
    unsigned int len = sizeof(arr) / sizeof(arr[0]);

    printf("Max value: %d\n", max(arr, len));  // Output: 5

    int empty_arr[] = {};
    len = sizeof(empty_arr) / sizeof(empty_arr[0]);

    printf("Max value of empty array: %d\n", max(empty_arr, len));  // Output: 0

    return 0;
}
