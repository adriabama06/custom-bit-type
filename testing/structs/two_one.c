// Two one but with structs, really easy!!!

#include <stdio.h>
#include <memory.h>

typedef struct two_of_four_bit {
   unsigned char two : 4;
   unsigned char one : 4;
} two_of_four_bit;

int main()
{
    two_of_four_bit number;
    *((unsigned char*) &number) = 0b00100001; // force put inside number [0010 0001]
    // memset(&number, 0b00100001, sizeof(two_of_four_bit));

    printf("sizeof(two_of_four_bit) = %ld bytes = %ld bits = sizeof(char)\n", sizeof(two_of_four_bit), sizeof(two_of_four_bit) * 8);

    printf("two = %d\n", number.two);
    printf("one = %d\n", number.one);

    // Bad output, sems using struct and forcing the number is a bad idea... Open ./two_one_correct.c

    printf("%d\n", *((unsigned char*) &number));
}