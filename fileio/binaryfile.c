#include <stdio.h>

int main(void) {
    FILE *fp;

    unsigned char bytes[6] = {5, 27, 43, 22, 87, 11};

    fp = fopen("output.bin", "wb");

    fwrite(bytes, sizeof(char), 6, fp);

    fclose(fp);
}
