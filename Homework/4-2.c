#include <stdio.h>

find(int a[], size_t len, int cond)
{

}

static int even(int element)
{
    return (element % 2) == 0;
}

int main()
{
    int x[] = {1,3,5,7};
    int y[] = {1,3,6,9};

    printf("even elements in x? %s\n", (find_even(x, 4, even) ? "yes" : "no"));
    printf("even elements in y? %s\n", (find_even(y, 4, even) ? "yes" : "no"));

    return 0;
}