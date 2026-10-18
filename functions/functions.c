#include <stdio.h>

int increment(int n) { return n + 1; }

int main(void) {
    int i = 7;
    int j = increment(i);
    printf("increment func is called on %d and the result is %d\n", i, j);
}
