//unsigned int 型の整数へのポインタ p を引数として受け取り、その参照先の値を100の位まで四捨五入して書き換える関数 round100(p) を定義せよ

#include <stdio.h>

/*
void round100(unsigned int* p)
{
    unsigned int twodigits = *p % 100;
    if (twodigits < 50) {
        // 12345 - 45 = 12300
        *p -= twodigits;
    }
    else {
        // 56789
        *p += (100 - twodigits);
    }
}
*/

void round100(unsigned int* p)
{
    // 56789 + 50 = 56839
    *p = ((*p + 50) / 100) * 100;
}

int main()
{
    unsigned int x = 12345, y = 67890;
    round100(&x);
    round100(&y);
    printf("%d %d\n", x, y);
    return 0;
}