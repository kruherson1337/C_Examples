//
// Created by Tomaz Stoiljkovic on 22.5.2019.
//

#include <stdio.h>
#include <stdbool.h>

int main() {

    int inputNumber;
    printf("Enter number: ");
    scanf("%d", &inputNumber);

    if (inputNumber <= 0) {
        printf("Prime number cannot be negative or 0!");
    } else if (inputNumber == 1) {
        printf("1 is neither a prime or a composite number!");
    } else {
        bool isPrime = true;
        for (int i = 2; i <= inputNumber / 2; i++) {
            if (inputNumber % i == 0) {
                isPrime = false;
                break;
            }
        }

        if (isPrime) {
            printf("Number %d is prime number!", inputNumber);
        } else {
            printf("Number %d is not prime number!", inputNumber);
        }
    }

    return 0;
}