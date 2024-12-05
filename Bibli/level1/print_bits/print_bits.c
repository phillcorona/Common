#include <unistd.h>

/**
 * print_bits - Prints the binary representation of a byte (8 bits).
 * @octet: The byte (unsigned char) whose binary representation is to be printed.
 * 
 * This function prints the binary representation of the given byte (`octet`) 
 * starting from the most significant bit (MSB) to the least significant bit (LSB). 
 * It does not append a newline at the end of the output.
 * 
 * The function uses bitwise operations to check each bit of the byte and 
 * prints either "1" or "0" depending on the value of the bit.
 * 
 * Example:
 * 
 * - If `octet` is 2, the output will be "00000010".
 * - If `octet` is 255, the output will be "11111111".
 * 
 * No newline character is printed at the end.
 */
void print_bits(unsigned char octet)
{
    int i = 7;  // Start with the most significant bit (MSB)
    
    // Loop through each bit of the byte (from bit 7 to bit 0)
    while (i >= 0)
    {
        // Check if the i-th bit is set to 1
        if (octet & (1 << i))
            write(1, "1", 1);  // Print "1" if the bit is set
        else
            write(1, "0", 1);  // Print "0" if the bit is not set
        
        i--;  // Move to the next bit (lower significance)
    }
}
