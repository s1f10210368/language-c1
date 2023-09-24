#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int* catarr(const char* a1, const char* a2, int n)
{
    const char* a1, a2 = (sizeof*)malloc(n * sizeof(int));
    if (!a) return NULL;
  

    for (int i = 0; i < n; i++) {
        a[i] = i+1;
    }
    return a;
}


int main()
{
    int arr1[] = {1,2,3};
    int arr2[] = {9,8,7};
    int* replica = catarr(arr1, arr2, 3);

    for (int i = 0; i < 6; i++) {
        printf("%d\n", replica[i]);
    }
    free(replica);
    return 0;
}