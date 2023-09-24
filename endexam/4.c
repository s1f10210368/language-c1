//32ビットの符号なし整数 x を引数に取り、 x のビット13を反転させた値を返す関数 flip13(x) を定義せよ

#include <stdio.h>
#include <stdint.h>

uint32_t flip13(uint32_t x)
{
    return x ^ (1U << 13);
}

int main()
{
    uint32_t v = 0xdeadbeef;
    printf("%u -> %u\n", v, flip13(v));
    return 0;
}