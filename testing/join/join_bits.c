#include <stdio.h>

int main()
{
    // 1111      = 15
    unsigned char number_15 = 0b1111;

    // 1111 1111 = 255
    unsigned char number_255 = 0b11111111;

    printf("number_15       = %d\n", number_15);
    printf("number_255      = %d\n", number_255);


    // 1111 = 15
    // 1111 = 15
    // 1111 + 1111 = 1111 1111 = 255
    
    // X << 4 = Move X, 4 times to the << direction ->
    // [0 0 0 0 1 1 1 1] << 4 ->
    // [1 1 1 1 0 0 0 0]
    
    // [1 1 1 1 0 0 0 0] | [0 0 0 0 1 1 1 1] ->
    // [1 1 1 1 1 1 1 1]
    
    unsigned char number_255_join = (number_15 << 4) | (number_15 & 0b1111);

    // WHY use "&"?
    // WHAT I UNDERSTAND:
    // A                   B
    // [0 0 0 0 1 1 1 1] & [1 1 1 1]
    // Cause one is 4, A must be cut
    // A                             B
    // [0 0 0 0 -- CUT -- 1 1 1 1] & [1 1 1 1]


    // A           B
    // [1 1 1 1] & [1 1 1 1]
    // A[0] == B[0] => 1
    // C
    // [1]

    // A           B
    // [1 1 1 1] & [1 1 1 1]
    // A[1] == B[1] => 1
    // C
    // [1 1]

    // ...

    // A           B
    // [1 1 1 1] & [1 1 1 1]
    // A[3] == B[3] => 1
    // C
    // [0 0 0 0 1 1 1 1]
    
    // Then [1 1 1 1] | [1 1 1 1]
    // [1111 1111] = 255

    // Why do this¿?
    // The result number can be incorrect, cause if:
    // [0000 0100] << 4 | [0001 1111] without & 0b1111
    // [0000 0100] << 4 = [0100]
    // [0100] | [0001 1111] ->
    // [0101 1111] Ohh nooo we expect:
    // [0100 1111] <- Correct if we use & 0b1111

    // WARNING:
    /*
    This time where using 4bit and 8bit, in the case of ex: 8bit and 16bit:
    [0000 0000 0100 1001] << 8 | [0000 0000 0010 0100] & 0b11111111 
    [0100 1001 0010 0100] <- Correct, thanks to & 0b11111111 that cuts the first [0000 0000 of 0010 0100]
    */

    printf("number_255_join = %d\n", number_255_join);
}