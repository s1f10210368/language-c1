#include <stdio.h>
#include <string.h>

int main(int argc, char* argv[])
{
    if (argc <= 1){
        fprintf(stderr, "Usage: secure <string>\n");
        return 1;
    }
    char* s = argv[1];
    if (strlen(s) < 3){
        fprintf(stderr, "ERROR: length needs to be at least 3\n");
        return 1;
    }
    puts(&s[strlen(s) - 3]); // Pointer to 3rd last character in s
    return 0;
}