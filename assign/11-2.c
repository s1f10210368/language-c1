//SBIxCR1 レジスタの値(32ビット) x を受け取りACKフィールド (Bit 4)の値を返す関数 get_ack(x) を定義せよ

#include <stdio.h>
#include <stdint.h>

uint32_t get_ack(uint32_t x)
{
    //      x = xxxxxxx....xxxxXxxxx(binary)
    // x >> 4 = 00000xxxxx....xxxxxX(binary)
    // &    1 = 00000000000000000001
    //------------------------------
    //          0000000000000000000X(binary)
    return (x >> 4) & 0x1;
}