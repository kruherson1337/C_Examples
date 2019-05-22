//
// Created by Tomaz Stoiljkovic on 22.5.2019.
//

#include <stdio.h>

void swap(char* a, char* b) {
    char c = *b;
    *b = *a;
    *a = c;
}

int main() {
    printf("Hello, World!\n");

    char a = 'a';
    char b = 'b';

    swap(&a, &b);

    printf("a: %c\n", a);
    printf("b: %c", b);


    return 0;
}