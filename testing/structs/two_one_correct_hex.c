// Two one but with structs, really easy!!!

#include <stdio.h>

typedef struct two_of_four_bit {
   unsigned char two : 4;
   unsigned char one : 4;
} two_of_four_bit;

int main()
{
    two_of_four_bit number;
    number.two = 0x2;
    number.one = 0x1;

    printf("sizeof(two_of_four_bit) = %ld bytes = %ld bits = sizeof(char)\n", sizeof(two_of_four_bit), sizeof(two_of_four_bit) * 8);

    printf("two = %d\n", number.two);
    printf("one = %d\n", number.one);

    printf("%d\n", *((unsigned char*) &number)); // What reversed? C does weird things with structs
}