#include <stdio.h>

int main(void) {
    FILE *fp;
    unsigned char bytes[6] = {1, 2, 54, 23, 76, 222};

    fp = fopen("outputbyte.bin", "wb");

    fwrite(bytes, sizeof(char), 6, fp);

    fclose(fp);
}
