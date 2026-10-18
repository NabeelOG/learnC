#include <stdio.h>

struct car {
    char *name;
    float price;
    int speed;
};

void setPrice(struct car *c, float price);

int main(void) {

    struct car figo;

    figo.name = "Ford figo";
    figo.price = 15.50;
    figo.speed = 140;

    printf("Name:   %s\n", figo.name);
    printf("Price (USD):    %f\n", figo.price);
    printf("Speed:  %d\n", figo.speed);

    struct car jeep = {"Compass", 25.79, 180};

    printf("Name:   %s\n", jeep.name);
    printf("Price (USD):    %f\n", jeep.price);
    printf("Speed:  %d\n", jeep.speed);

    struct car thar = {.name = "THAR", .speed = 140};

    setPrice(&thar, 18.89);

    printf("Name:   %s\n", thar.name);
    printf("Price (USD):    %f\n", thar.price);
    printf("Speed:  %d\n", thar.speed);

    return 0;
}

void setPrice(struct car *c, float new_price) { c->price = new_price; }
