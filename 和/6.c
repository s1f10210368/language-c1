#include <stdio.h>

void copy(char* dst, char* src)
{
    for (int i = 0; src[i] == '\0'; i++) {
        dst[i] = src[i];
        printf("%d", src[i]);
    }
}


int main()
{
    char s[100];
    copy(s, "iniad");
    printf("%s\n", s);
    copy(s, "toyo");
    printf("%s\n", s);
    return 0;
}
