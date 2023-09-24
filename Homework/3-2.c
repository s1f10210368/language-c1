#include <stdio.h>
​
int best(int n)
{
    static int max = 0;
​
    if (n > max) {
        max = n;
    }
    return max;
}
​
int main()
{
    printf("%d\n", best(1));
    printf("%d\n", best(3));
    printf("%d\n", best(2));
    printf("%d\n", best(4));
    return 0;
}