//
// Created by Tomaz Stoiljkovic on 22.5.2019.
//

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void swap(char **a, char **b) {
    char *c = *b;
    *b = *a;
    *a = c;
}

int main() {
    char aa[4] = { 'a','a','a','\0'};
    char *a = (char *) malloc(sizeof(char) * (sizeof(aa) + 1));
    strcpy(a, aa);

    char bb[4] = { 'b','b','b','\0'};
    char *b = (char *) malloc(sizeof(char) * (sizeof(bb) + 1));
    strcpy(b, bb);

    swap(&a,&b);

    printf("a: %s\n", a);
    printf("b: %s", b);

    return 0;
}