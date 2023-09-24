#include <stdio.h>
#include <stdint.h>

uint16_t change(uint16_t x)
{
    x = x & ~(0 >> 4);
    return x;
}

int main()
{
    uint16_t v = 0x1234;
    printf("%u -> %u\n", v, change(v));
    return 0;
}