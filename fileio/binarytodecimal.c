#include <stdio.h>

int main(void) {
    FILE *fp;
    unsigned char c;

    int i = 0;

    fp = fopen("output.bin", "rb");

    printf("{");
    while (fread(&c, sizeof(char), 1, fp) > 0)
        printf("%d ,", c);

    printf("}\n");
    fclose(fp);
}
