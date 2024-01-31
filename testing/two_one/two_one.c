#include <stdio.h>

int main()
{
    // 0010 = 2
    // 0001 = 1
    // 0010 0001 inside 8 bits or 1 byte
    unsigned char number = 0b00100001;

    unsigned char two = (number >> 4) & 0b1111;
    unsigned char one = number & 0b1111;

    printf("two = %d\n", two);
    printf("one = %d\n", one);
}