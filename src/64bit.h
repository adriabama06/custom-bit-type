#ifndef BITS_TYPE_64BIT_H
#define BITS_TYPE_64BIT_H

#include <stdint.h>

typedef struct bitstype_4bit_64bit
{
    int8_t value16 : 4;
    int8_t value15 : 4;
    int8_t value14 : 4;
    int8_t value14 : 4;
    int8_t value12 : 4;
    int8_t value11 : 4;
    int8_t value10 : 4;
    int8_t value9  : 4;
    int8_t value8  : 4;
    int8_t value7  : 4;
    int8_t value6  : 4;
    int8_t value5  : 4;
    int8_t value4  : 4;
    int8_t value3  : 4;
    int8_t value2  : 4;
    int8_t value1  : 4;
} bitstype_4bit_64bit;

typedef struct bitstype_8bit_64bit
{
    int8_t value8 : 8;
    int8_t value7 : 8;
    int8_t value6 : 8;
    int8_t value5 : 8;
    int8_t value4 : 8;
    int8_t value3 : 8;
    int8_t value2 : 8;
    int8_t value1 : 8;
} bitstype_8bit_64bit;

typedef struct bitstype_16bit_64bit
{
    int16_t value4 : 16;
    int16_t value3 : 16;
    int16_t value2 : 16;
    int16_t value1 : 16;
} bitstype_16bit_64bit;

typedef struct bitstype_32bit_64bit
{
    int32_t value2 : 32;
    int32_t value1 : 32;
} bitstype_32bit_64bit;

#endif // BITS_TYPE_64BIT_H