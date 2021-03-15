#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
    int numbers[4] = { 8 };
    char name[6] = { 'A' };

    printf("numbers: %d %d %d %d\n", numbers[0], numbers[1], numbers[2], numbers[3]);
    printf("name: %c %c %c %c\n", name[0], name[1], name[2], name[3]);
    printf("name: %s\n", name);

    numbers[0] = 1;
    numbers[1] = 2;
    numbers[2] = 3;
    numbers[3] = 4;

    name[0] = 'A';
    name[1] = 'a';
    name[2] = 'r';
    name[3] = 'o';
    name[4] = 'n';
    name[5] = '\0';

    printf("numbers: %d %d %d %d\n", numbers[0], numbers[1], numbers[2], numbers[3]);
    printf("name: %c %c %c %c %c %c\n", name[0], name[1], name[2], name[3], name[4], name[5]);

    printf("name: %s\n", name);
    char *last = "VanAlstine";
    printf("name: %s\n", last);

    return EXIT_SUCCESS;
}
