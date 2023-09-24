#include <stdio.h>
#include <string.h>

void pyramid(int level)
{
    char dest[1000];

    for(int i = 1; i <= level; i++){
        for(int j = 1; j <= level - i; j++)
            strcat(dest, " ");
        for(int j = 1; j <= i; j++)
            strcat(dest, "#");
        for(int j = 1; j <= i; j++)
            strcat(dest, "#");
        for(int j = 1; j <= level - i; j++)
            strcat(dest, " ");
        
        strcat(dest, "\n");
        
    }
    printf("%s", dest);

}

int main()
{
    pyramid(5);
    return 0;
}