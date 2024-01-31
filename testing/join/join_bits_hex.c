#include <stdio.h>

int main()
{
    // 0xF      = 15
    unsigned char number_15 = 0xF;

    // 0xFF = 255
    unsigned char number_255 = 0xFF;

    printf("number_15       = %d\n", number_15);
    printf("number_255      = %d\n", number_255);


    // 0xF = 1111 = 15
    // 0xF = 1111 = 15
    // 0xF + 0xF = 0xFF = 1111 1111 = 255
    
    // X << 4 = Move X, 4 times to the << direction ->
    // [0 0 0 0 1 1 1 1] << 4 ->
    // [1 1 1 1 0 0 0 0]
    
    // [1 1 1 1 0 0 0 0] | [0 0 0 0 1 1 1 1] ->
    // [1 1 1 1 1 1 1 1]
    
    unsigned char number_255_join = (number_15 << 4) | (number_15 & 0xF);

    // WHY use "&"?
    // & is the operator AND
    // with the operator AND we can clear the not necesary bits using n of 1 as required
    // [0010 1111]
    // by a bug or any other reason there is a 0010 instance of 0000

    // if we do: [0010 1111] & [1111]
    // [0010 1111]
    // [0000 1111]
    // compare if(0 && 0)? false
    // [0]
    // compare if(0 && 0)? false
    // [00]
    // compare if(1 && 0)? false
    // [000]
    // ...
    // compare if(1 && 1)? true
    // [0000 1]
    // compare if(1 && 1)? true
    // [0000 11]
    // ...
    // compare if(1 && 1)? true
    // [0000 1111]
    // then you only filter the last 4 bits

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
    [0100 1001 0010 0100] <- Correct, thanks to & 0b11111111 that remove the first 8 bits and leave the others 8 bits [0000 0000 0010 0100]
    */

    printf("number_255_join = %d\n", number_255_join);
}