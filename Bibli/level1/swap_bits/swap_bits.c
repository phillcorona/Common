#include <unistd.h>

/**
 * swap_bits - Swaps the two halves of a byte.
 * @octet: The byte whose halves are to be swapped.
 * 
 * This function takes a byte (8 bits), swaps its two halves, and returns 
 * the result. The higher 4 bits of the byte are swapped with the lower 4 bits.
 * 
 * Example:
 * Input:  0100 0001 (0x41)
 * Output: 0001 0100 (0x14)
 * 
 * Return: The byte with the halves swapped.
 */
unsigned char swap_bits(unsigned char octet)
{
    return ((octet >> 4) | (octet << 4));
}
