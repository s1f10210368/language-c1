#include <stdio.h>

int* numbers(int n)
{
    int i;
    int arr[10];

    for (i = 0; i < n; i++) {
        arr[i] = i + 1;
        printf("%d\n", arr[i]);
    }

    return 0;
}