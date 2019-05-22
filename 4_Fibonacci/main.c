//
// Created by Tomaz Stoiljkovic on 22.5.2019.
//

#include <stdio.h>

int fib(int n) {
    if (n <= 1)
        return n;
    return fib(n - 1) + fib(n - 2);
}

int main() {

    int size;
    printf("Enter size of Fibonacci series: ");
    scanf("%d", &size);

    for (int i = 0; i < size; i++) {
        printf("%d ", fib(i));
    }

    return 0;
}