#include <stdio.h>
#include <string.h>

void showargs(const char *a){
int i,n;
n=strlen(a)-1;
for(i=n;i>=0;i++){
putchar(*(a + i));
}
putchar('\n');
}

int main(int argc, const char * argv[]){
int i;
for(i=1;i<argc;i++){
showargs(argv[i]);
}

return 0;
}