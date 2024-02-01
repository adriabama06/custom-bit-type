#ifndef BITS_TYPE_32BIT_H
#define BITS_TYPE_32BIT_H

#include <stdint.h>

typedef struct bitstype_4bit_32bit
{
    int8_t value8 : 4;
    int8_t value7 : 4;
    int8_t value6 : 4;
    int8_t value5 : 4;
    int8_t value4 : 4;
    int8_t value3 : 4;
    int8_t value2 : 4;
    int8_t value1 : 4;
} bitstype_4bit_32bit;

typedef struct bitstype_8bit_32bit
{
    int8_t value4 : 8;
    int8_t value3 : 8;
    int8_t value2 : 8;
    int8_t value1 : 8;
} bitstype_8bit_32bit;

typedef struct bitstype_16bit_32bit
{
    int16_t value2 : 16;
    int16_t value1 : 16;
} bitstype_16bit_32bit;

#endif // BITS_TYPE_32BIT_H