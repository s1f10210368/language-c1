#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define IS_DIGIT(c) (((c >= '0') && (c <= '9')) ? 1:0;)

static inline int is_digit(char c)
{
    return ((c >= '0') && (c <= '9')) ? 1:0;
}

int main()
{
    const char *testcase = "a1c80Z1";
    for (int i = 0; testcase[i] != '\0'; i++){
        char c = testcase[i];
        printf("%c %d %d\n", c, IS_DIGIT(c), is_digit(c));

    }
    return 0;
}