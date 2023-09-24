#include <stdio.h>

int main(void)
{
    int n = 40;
    int F0, F1, F2;

    F0 = 0;
    F1 = 1;

    printf("%d/n", F0);
    printf("%d/n", F1);

    F2 = F0 + F1;
    F0 = F1;
    F1 = F2;

    return 0;
}