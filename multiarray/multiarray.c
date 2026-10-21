#include <stdio.h>

// array is always passed as pointers, any of the 3 methods can be used for this
// void times(int *a, int size) {
// void times(int a[], int size) {
void times(int a[5], int size) {
    for (int i = 0; i < size; i++) {
        printf("%d\n", a[i] * 2);
    }
}

int main(void) {
    int row, col;

    int a[2][5] = {{1, 2, 3, 4, 5}, {6, 7, 8, 9, 10}};

    for (row = 0; row < 2; row++) {
        for (col = 0; col < 5; col++) {
            printf("(%d, %d) = %d\n", row, col, a[row][col]);
        }
    }

    int b[5] = {1, 3, 5, 7, 9};
    int *p;

    p = &b[0];

    printf("%d\n", *p);

    times(b, 5);
}
