//qsortを用いて降順にソートせよ

#include <stdio.h>
#include <stdlib.h>

int intcmp(const void* x, const void* y)
{
    int xval = *(const int*)x;
    int yval = *(const int*)y;
    return xval - yval;

    if (xval == yval){
        return 0;
    }
}

int main()
{
    int numbers[] = {10, 35, 72, 99, 23, 84, 55};

    qsort(numbers, 7, sizeof(int), intcmp);

    for (int i = 0; i < 7; i++){
        printf("numbers[%d] = %d\n", i, numbers[i]);
    }
    return 0;
}