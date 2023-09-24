#include <stdio.h>
#include <stdlib.h>
#include <string.h>

double* copyarray(const double* a, int n) {
    double* replica = (double*)malloc(n * sizeof(double));
    if (replica == NULL) {
        // メモリ割り当てエラーの場合の処理
        fprintf(stderr, "Memory allocation failed.\n");
        return NULL;
    }
    memcpy(replica, a, n * sizeof(double));
    return replica;
}

int main() {
    double arr[] = {1.0, 2.0, 3.0};
    double* replica = copyarray(arr, 3);

    if (replica == NULL) {
        return 1;
    }

    for (int i = 0; i < 3; i++) {
        printf("%f\n", replica[i]);
    }

    free(replica);
    return 0;
}
