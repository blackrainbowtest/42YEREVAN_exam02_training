/*

Assignment name  : print_bits
Expected files   : print_bits.c
Allowed functions: write
--------------------------------------------------------------------------------

Write a function that takes a byte, and prints it in binary WITHOUT A NEWLINE
AT THE END.

Your function must be declared as follows:

void	print_bits(unsigned char octet);

Example, if you pass 2 to print_bits, it will print "00000010"

*/

#include <unistd.h>

void print_bits(unsigned char octet)
{
    int max_bits = 8;
    unsigned char mask;
    while (max_bits--)
    {
        mask = ((octet >> max_bits) & 1) + '0';
        write(1, &mask, 1);
    }
}

int main(void)
{
    unsigned char octet = 2;
    print_bits(octet);
    return (0);
}