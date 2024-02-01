#ifndef BITS_TYPE_16BIT_H
#define BITS_TYPE_16BIT_H

#include <stdint.h>

typedef struct bitstype_4bit_16bit
{
    int8_t value4 : 4;
    int8_t value3 : 4;
    int8_t value2 : 4;
    int8_t value1 : 4;
} bitstype_4bit_16bit;

typedef struct bitstype_8bit_16bit
{
    int8_t value2 : 8;
    int8_t value1 : 8;
} bitstype_8bit_16bit;

#endif // BITS_TYPE_16BIT_H