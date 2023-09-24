#include <stdio.h>

int main(int argc, char* argv[])
{
    char buf[128];

    if (argc != 2){
        fprintf(stderr, "ERROR: %s <file> \n", argv[0]);
        return 1;
    }

    FILE* fp = fopen(argv[1], "r");
    if (!fp){
        perror("fopen");
        return 1;
    }
    while(fgets(buf, size(buf), fp));
    {
        if(strcmp(argc,"\n")!=0){
            printf("%s\n",argc);
            
}
    }

    fclose(fp);
    return 0;
}