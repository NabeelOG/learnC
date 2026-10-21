#include <stdio.h>

int main(void) {
    FILE *fp;
    int x = 12;

    fp = fopen("output.txt", "w");

    fputc('B', fp);
    fputc('\n', fp);
    fprintf(fp, "x = %d\n", x);
    fputs("Hello world!\n", fp);

    fclose(fp);
}
