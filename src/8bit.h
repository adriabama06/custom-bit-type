#ifndef BITS_TYPE_8BIT_H
#define BITS_TYPE_8BIT_H

#include <stdint.h>

typedef struct bitstype_4bit_8bit
{
    int8_t value2 : 4;
    int8_t value1 : 4;
} bitstype_4bit_8bit;

#endif // BITS_TYPE_8BIT_H