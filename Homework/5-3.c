#include <stdio.h>
#include <string.h>

char* strdupcat(char* s, const char* t)
{
    size_t i = strlen(s);
    strcpy(&s[i], t);

    return s;
}

int main()
{
    char* s = strdupcat("INIAD", "Toyo");
    s[5] = 'Y';
    printf("%s\n", s);

    return 0;
}