#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>

int main(void) {
    // initializing varaible
    int i;

    int j;

    // assigning values to the variable
    i = 2;

    float f = 3.14;

    // needs to include <stdbool.h>
    bool x = true;

    char *s = "Hello World";

    if (x) {
        printf("%s i = %d and f = %f!\n", s, i, f);
    }

    printf("%d\n", true == 1);
    printf("%d\n", true == 2);

    i = 2;

    printf("The number %d is %s.\n", x, x % 2 == 0 ? "even" : "odd");

    // if else statement
    if (x == 10) {
        printf("x is 10");
    } else {
        printf("x is not 10");
    }

    i = 0;
    // while loop
    while (i <= 10) {
        printf("This is the value of i: %d\n", i);
        i++;
    }

    i = 10;

    do {
        printf("do while: i is %d\n", i);
        i--;
    } while (i >= 0);

    int r;

    do {
        r = rand() % 100;
        printf("%d\n", r);
    } while (r < 90 && r > 10);

    for (i = 0, j = 999; i < 10; i++, j--) {
        printf("%d, %d\n", i, j);
    }
}
