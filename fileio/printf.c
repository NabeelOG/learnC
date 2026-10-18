#include <stdio.h>

int main(void) {
    // FILE *fp = fopen("output.txt", "w");
    FILE *fp = stdout;
    int x = 32;

    fputc('B', fp);
    fputc('\n', fp);
    fprintf(fp, "x = %d\n", x);
    fputs("Hello, world!\n", fp);

    fclose(fp);
}
