#include <stdio.h>
#include <time.h>
char *ctime(const time_t *timep);
char *ctime_r(const time_t *timep, char *buf);
time_t t = time(NULL);

int main()
{
    FILE* fp = fopen("diary.txt", "a");
    if (!fp){
        fprintf("ERROR: failed to open file\n");
        return 1;
    }

    int fputs(const char* time, FILE* fp);
    printf("%s", ctime(&t));
    return 0;
}