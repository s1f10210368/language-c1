#include <stdio.h>
#include <string.h>

void interleave(char *d, const char *a, const char *b)
{
    int min_len;
    int j = 0;

    min_len = (strlen(a) > strlen(b)) ? strlen(b): strlen(a);

    for (int i = 0; i < min_len; i++){
        d[j++] = a[i];
        d[j++] = b[i];
    }

    d[j] = '\0';

    //長い方の文字列の余った部分をつなげるコードを入力

}

int main()
{
    char dest[1000];

    interleave(dest, "INIAD", "Toyo");
    printf("%s\n", dest);

    dest[0] = '\0';

    interleave(dest, "Toyo", "University");
    printf("%s\n", dest);

    return 0;

}