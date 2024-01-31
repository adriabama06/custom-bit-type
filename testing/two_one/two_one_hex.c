#include <stdio.h>

int main()
{
    // 0x2 = 0010 = 2
    // 0x1 = 0001 = 1
    // 0x2 | 0x1 = 0x21 = 0010 0001 inside 8 bits or 1 byte
    unsigned char number = 0x21;

    unsigned char two = (number >> 4) & 0xF;
    unsigned char one = number & 0xF;

    printf("two = %d\n", two);
    printf("one = %d\n", one);
}