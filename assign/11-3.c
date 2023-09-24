//SBIxCR1 レジスタの値 x と ACK フィールドの設定値 ack を引数にとり、x の ACK フィールドの値を ack に変えた結果を返す関数 set_ack(x, ack) を定義せよ

#include <stdio.h>
#include <stdint.h>

uint32_t set_ack(uint32_t x,uint32_t ack)
{
    if (ack){
        // ack = 1
        return x | (1 << 4);
    }
    else{
        // ack = 0
        return x & ~(1 << 4);
    }
}