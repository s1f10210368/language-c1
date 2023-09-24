#include <stdio.h>

typedef struct 
{
    int numer;
    int denom;
} fraction;

void fraction_mul(fraction* result, const fraction* a, const fraction*b)
{
    result->numer = ???
    result->denom = ???
}

void fraction_print(const fraction* result)
{
    printf("%d/%d\n", ???)
}

int main()
{
    fraction a = { .numer = 7, .denom = 3 };
    fraction b = { .numer = 2, .denom = 5 };
    fraction result;

    fraction_mul(&result, &a, &b);
    fraction_print(&result);

    return 0;
}