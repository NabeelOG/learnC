#include <stdio.h>

int main(void) {
    FILE *fp;

    char name[1024];

    float length;

    int mass;

    fp = fopen("whales.txt", "r");

    while (fscanf(fp, "%s %f %d", name, &length, &mass) != EOF) {
        printf("%s whale, weighs %d tonnes with %.1f meters long\n", name, mass, length);
    }

    fclose(fp);
}
