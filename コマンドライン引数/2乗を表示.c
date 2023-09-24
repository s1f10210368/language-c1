#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
    int i;
    if (argc != 2){
        fprintf(stderr, "ERROR\n"); 
        return 1;
    }
    int x = atoi(argv[1]);
    printf("%d ** 2 = %d\n", x, x * x);
    
    return 0;
}