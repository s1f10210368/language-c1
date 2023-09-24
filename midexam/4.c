//32ビットの符号なし整数 x を引数に取り、 x のビット13を0に、 ビット20を1に変えた値を返す関数 changebits(x) を定義せよ

#include <stdio.h>
#include <stdint.h>

uint32_t changebits(uint32_t x)
{
    x = x & ~(1 << 13); //~で1を0にした後、0を＆している

    x = x | (1 << 20);

    return x;
}

int main()
{
    uint32_t v = 0xdeadbeef;
    printf("%u -> %u\n", v, changebits(v));
    return 0;
}