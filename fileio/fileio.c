#include <stdio.h>

int main(void) {
    // fprintf(stdout, "Hello World");

    FILE *fp;
    // int c;
    char s[1024];
    int linecount = 0;

    fp = fopen("quote.txt", "r");

    // int c = fgetc(fp);
    // printf("%c\n", c);

    while (fgets(s, sizeof s, fp) != NULL) {
        printf("%d: %s", ++linecount, s);
    }

    fclose(fp);
}
