/*

Assignment name  : reverse_bits
Expected files   : reverse_bits.c
Allowed functions:
--------------------------------------------------------------------------------

Write a function that takes a byte, reverses it, bit by bit (like the
example) and returns the result.

Your function must be declared as follows:

unsigned char	reverse_bits(unsigned char octet);

Example:

  1 byte
_____________
 0100  0001
     ||
     \/
 1000  0010

*/


#include <unistd.h>
unsigned char	reverse_bits(unsigned char octet)
{
    unsigned char reversed = 0;
    int i = 0;
    while (i < 8)
    {

        reversed = reversed << 1;
        reversed = reversed | (octet & 1);
        octet = octet >> 1;
        i++;
    }
    return (reversed);
}
#include <stdio.h>
int main(void)
{
    unsigned char octet = 64;
    printf("og: %u\nmy: %u\n", octet, reverse_bits(octet));
    
    return (0);
}