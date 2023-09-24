#include <stdio.h>
#include <stdint.h>
#include <string.h>

void myatoi(int* s, int* n)
{
    int original[n];
    memcpy(original, s, n * sizeof(int));
    for (int i = 0; i < n; i++) {
        s[i] = original[i];
    }
}
int main()
{
    printf("%d\n", myatoi("12345"));
    return 0;
}