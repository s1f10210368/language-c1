//32ビットの符号なし整数 x を受け取り、そのビット3を0に、ビット6を1に変えた値を返す関数 setclear(x) を定義せよ

#include <stdio.h>
#include <stdint.h>


// x = ......10011001(binary)
// &)  11111111110111
// ---------------------------
//     xxxxxxxxxx0xxx

// 1 = 0000.....00001(binary)
// 1 << 3 = 00..01000

uint32_t setclear(uint32_t x)
{
    // clear bit 3
    x = x & ~(1 << 3);

    // set bit 6
    x = x | (1 << 6);

    return x;
}

int main()
{
    int x = 153; // 2進数で10011001
    printf("%d\n", setclear(x)); // 209 (2進数で11010001) が表示されるはず
    return 0;
}

