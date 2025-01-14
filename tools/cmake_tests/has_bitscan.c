// Copyright (c) 2023 Advanced Micro Devices, Inc. All rights reserved.
//
// This file is part of the AMD Render Pipeline Shaders SDK which is
// released under the AMD INTERNAL EVALUATION LICENSE.
//
// See file LICENSE.txt for full license details.

#include <intrin.h>

int main()
{
    unsigned long a = 0x42;
    unsigned long i = 0;
    unsigned char c = _BitScanForward(&i, a);
    unsigned char d = _BitScanReverse(&i, a);
    unsigned char e = _BitScanForward64(&i, a);
    unsigned char f = _BitScanReverse64(&i, a);
    return (int)(c + d + e + f);
}