#include <stdio.h>
#include <memory.h>

/*
Change:
typedef struct two_of_four_bit {
   unsigned char ---> two <--- : 4;
   unsigned char ---> one <--- : 4;
} two_of_four_bit;

to:
typedef struct two_of_four_bit {
   unsigned char ---> one <--- : 4;
   unsigned char ---> two <--- : 4;
} two_of_four_bit;

*/
typedef struct two_of_four_bit {
   unsigned char one : 4;
   unsigned char two : 4;
} two_of_four_bit;

int main()
{
    two_of_four_bit number;
    number.two = 0b0010;
    number.one = 0b0001;

    printf("sizeof(two_of_four_bit) = %ld bytes = %ld bits = sizeof(char)\n", sizeof(two_of_four_bit), sizeof(two_of_four_bit) * 8);

    printf("two = %d\n", number.two);
    printf("one = %d\n", number.one);

    printf("%d\n", *((unsigned char*) &number)); // = 33, Ok :D
}