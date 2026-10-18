#include <stdio.h>
#include <stdlib.h>

int main(void) {
    int goats = 0;

    // while (goats > 0) {
    // goats = rand() % 5;

    switch (goats) {
    case 0:
        printf("you have no goats\n");
        [[fallthrough]];

    case 1:
        printf("you have 1 goat\n");
        break;

    case 2:
        printf("you have 2 goat\n");
        break;

    default:
        printf("Yod have invalid goat\n");
        break;
    }
    // }
}
