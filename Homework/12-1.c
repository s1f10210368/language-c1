#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>

#define MAX_LINES 128

void shuffle(void* arr, size_t size, size_t n) 
{
    for(int i = 0; i < size; i++) {
        int j = rand()%size;
        int t = array[i];
        array[i] = array[j];
        array[j] = t;
    }
}

int main(int argc, char* argv[]) {
    if(argc != 2) {
        fprintf(stderr, "Usage: %s <file>\n", argv[0]);
        return 1;
    }

    FILE* fp = fopen(argv[1], "r");
    if(!fp) {
        perror("Error: ");
        return -1
    }

    // 例１：
    char buf[MAX_LINES][512];
    int n = 0;

    for(n = 0; fgets(buf[n], sizeof(buf[n]), fp); n++);
    shuffle(list, 10);
    for (int i = 0; i < 10; i++) {
        printf("%d,", list[i]);
    }


    fclose(fp);
    return 0;
}