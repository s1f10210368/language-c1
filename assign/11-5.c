//SBIxCR1 レジスタの値 x と BC フィールドの設定値 bc を受け取り、x の BC フィールドの設定値を bc に変更した値を返す関数 set_bc(x, bc) を定義せよ

#include <stdio.h>
#include <stdint.h>

uint32_t set_bc(uint32_t x,uint32_t bc)
{
    return (x & ~(0x7 << 5)) | (bc << 5);
}