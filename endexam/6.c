#include <stdio.h>

void vprint(char a[])
{
    for (int i = 0; i < sizeof(a[i]); i++) {
        printf("%c\n", a[0]);
        printf("%c\n", a[1]);
        printf("%c\n", a[2]);
        printf("%c\n", a[3]);
        printf("%c\n", a[4]);
        printf("%c\n", a[5]);
        printf("%c\n", a[6]);
        printf("%c\n", a[7]);
        printf("%c\n", a[8]);
        printf("%c\n", a[9]);
        printf("%c\n", a[10]);
        printf("%c\n", a[11]);
        printf("%c\n", a[12]);
        printf("%c\n", a[13]);
        printf("%c\n", a[14]);
        printf("%c\n", a[15]);
        printf("%c\n", a[16]);
        printf("%c\n", a[17]);
    }
}


int main()
{
    vprint("INIAD is wonderful");
    return 0;
}