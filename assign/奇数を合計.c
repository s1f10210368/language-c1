//二つの正整数 n, m を引数にとり、n から m までの数のうち奇数を合計した結果を返す関数 sum_odds を定義せよ

#include <stdio.h>

int sum_odds(int n, int m)
{
    int total = 0;
    
    /* n を奇数となるように切り上げ
       Round up n to be an odd number */
    if (n % 2 == 0) n++;

    /* あとは２つ飛ばしで奇数をたどればOK
       Then enumerate numbers by strides of 2 to get only odd numbers */
    for (; n <= m; n += 2) {
        total += n;
    }

    return total;
}

int sum_odds2(int n, int m)
{
    int total = 0;

    for (int i = n; i <= m; i++) {
        if (i % 2 != 0) {
            total += i;
        }
    }

    return total;
}

int main()
{
    printf("sum = %d\n", sum_odds(10, 20));
    printf("sum = %d\n", sum_odds2(10, 20));
    return 0;
}