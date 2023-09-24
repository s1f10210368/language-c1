//qsortを用いて文字列の長さが短い順にソートせよ

#include <stdio.h>
#include <string.h>

int strlencmp(const void* x, const void* y)
{
    const char* xval = *(const char**)x;
    const char* yval = *(const char**)y;
    return strlen(xval) - strlen(yval);
}

int main()
{
    const char* strs[] = {"INIAD", "Toyo", "is", "wonderful"};

    qsort(strs, 4, sizeof(const char*), strcmp);

    for (int i = 0; i < 4; i++){
        printf("strs[%d] = %s\n", i, strs[i]);
    }
    return 0;
}