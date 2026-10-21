#include "stdio.h"

int main(void) {
    FILE *fp;

    fp = fopen("hello.txt", "r");

    int c;
    // int c = fgetc(fp);

    // printf("%c\n", c);

    while ((c = fgetc(fp)) != EOF) {
        printf("%c", c);
    }
    printf("\n");

    fclose(fp);
}
