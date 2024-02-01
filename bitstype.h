#ifndef BITS_TYPE_H
#define BITS_TYPE_H

#include <stdint.h>

#ifdef UINT8_MAX
#include "src/8bit.h"

#ifdef UINT16_MAX
#include "src/16bit.h"

#ifdef UINT32_MAX
#include "src/32bit.h"

#ifdef UINT64_MAX
#include "src/64bit.h"

#endif UINT64_MAX
#endif UINT32_MAX
#endif UINT16_MAX
#endif UINT8_MAX

#endif // BITS_TYPE_H