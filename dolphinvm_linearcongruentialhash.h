#pragma once

#include <stdint.h>

/*
 * this hash function is a variant of a linear congruential pseudo-random number generator.
 * It produces a 32-bit hash with very good scattering;
 * eg:
 *    "aaa" -> 3,568,862,939
 *    "aab" -> 4,166,348,560
 *    "aac" ->   468,866,885
 */
inline uint32_t
LinearCongruentialHash(uint8_t *ptr, int count)
{
    uint32_t    hash;
    int i;
    
    for (i=0,hash=0;i<count;i++)
        hash = (hash + ptr[i]) * 597485621;
    
    return hash;
}
