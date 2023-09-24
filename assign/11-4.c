//SBIxCR1 レジスタの値 x を受け取り、その BC フィールド(ビット5～7)の値を返す関数 get_bc(x) を定義せよ

#include <stdio.h>
#include <stdint.h>

uint32_t get_bc(uint32_t x)
{
    //      x = xxxxxxx...xxXXXxxxxx(binary)
    // x >> 5 = 00000xxxxxxxxxxxxXXX(binary)
    // & 0x7    00000000000000000111
    // ------------------------------
    //          00000000000000000XXX
    return (x >> 5) & 0x7;
}