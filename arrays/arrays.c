#include <stdio.h>

int main(void) {
    int i;
    float f[4];

    f[0] = 3.14;
    f[1] = 3.15;
    f[2] = 3.16;
    f[3] = 3.17;

    for (i = 0; i < sizeof(float); i++) {
        printf("%dth element is %f\n", i, f[i]);
    }

    int a[5] = {1, 2, 3, 4, 5};

    for (i = 0; i < 6; i++) {
        printf("%d\n", a[i]);
    }

    int number[] = {1, 2, 4, 0, 0, 0, 5, 8, 0, 45, 7};
    int length = sizeof(number) / sizeof(number[0]);
    printf("[");
    for (int i = 0; i < length; i++) {
        if (i == length - 1) {
            printf("%d", number[i]);
            break;
        }
        printf("%d, ", number[i]);
    }
    printf("]\n");
}
