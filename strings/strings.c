#include <stdio.h>
#include <string.h>

int main(void) {
    char s[] = "Hello, World";

    char *c = "This is a C program";

    printf("%s\n%s\n", s, c);

    s[0] = 'Z';

    for (int i = 0; i < 15; i++) {
        printf("%c\n", c[i]);
    }

    printf("getting the string length of string c : %zu\n", strlen(c));

    // here f is an array string and its a pointer also, so if we assign another
    // pointer t to s and modify it, it will chnage the underlying f string as well
    char f[] = "Hellooooo";
    char *t;

    t = s;

    t[0] = 'Z';

    printf("%s\n", s);

    // copying a string
    char hello[] = "Helloo";
    char copy[100];

    strcpy(copy, hello);

    copy[0] = 'Z';

    printf("%s\n", hello);
    printf("%s\n", copy);
}
