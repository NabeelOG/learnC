#include <stdio.h>

void increment(int *p);

int main(void) {

    int i = 10;
    int *p = &i;

    printf("this is i: %d\n", i);
    printf("this is p: %p\n", p);
    printf("this is *p: %d\n", *p);
    increment(&i);

    printf("this is i: %d\n", i);
}

void increment(int *p) { *p = *p + 1; }
