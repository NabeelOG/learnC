#include <stdio.h>

struct animal {
    char *name;
    int leg_count, speed;
};

typedef struct animal animal;

void updateSpeed(animal *a, int newspeed) { a->speed = newspeed; }

int main(void) {
    typedef int bagel;

    bagel x = 69;

    printf("the value of bagel is %d\n", x);

    animal dog;

    dog.name = "chihuahua";
    dog.leg_count = 4;
    dog.speed = 7;

    printf("Name: %s\n", dog.name);
    printf("Legs: %d\n", dog.leg_count);
    printf("runs with speed: %d\n", dog.speed);

    updateSpeed(&dog, 779);

    printf("Name: %s\n", dog.name);
    printf("Legs: %d\n", dog.leg_count);
    printf("runs with updated speed: %d\n", dog.speed);
}
