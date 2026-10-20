#include <stdio.h>

int main(void) {
    FILE *fp;
    char s[2048];
    int lineAccount = 0;

    fp = fopen("quote.txt", "r");

    while (fgets(s, sizeof(s), fp)) {
        printf("%s", s);
    }

    fclose(fp);
}
