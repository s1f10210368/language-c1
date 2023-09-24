#include <stdio.h>

int main()
{
    FILE*  fp = fopen("unknown.bin", "rb");
    if (fp == NULL){
        fprintf(stderr, "ERROR\n");
        return 1;
    }

    char header[8];
    int n = fread(header, 1, 8, fp);

    const char png_header[] = (0x89, 0x50, 0x4E, 0x47, 0x0D, 0x0A, 0xA1, 0x0A);
    const char jpg_header[] = (0xFF, 0xD8, 0xFF);

    if (n >= 8&& memcmp(header, png_header, sizeof(png_header)) == 0){
        printf("PNG file\n");
    }
    else if (n >= 3 && memcmp(header, jpg_header, 3)){
        printf("JPEG file\n");
    }
    else {
        printf("Unknown file type\n");
    }
    return 0;
}