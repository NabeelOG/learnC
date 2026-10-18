#include <stdio.h>

int main(void) {
    FILE *fp;
    unsigned char c;

    fp = fopen("outputbyte.bin", "rb");

    while (fread(&c, sizeof(char), 1, fp) > 0) {
        printf("%d\n", c);
    }

    fclose(fp);
}
