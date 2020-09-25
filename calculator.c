#include <stdio.h>

//
// Created by klaas on 9/25/2020.
//

float calculations(float a, float b, char operator);
void compute();

void compute() {
    float first, second;
    char operator;
    printf("Please enter in the first number:");
    scanf_s("%f", &first);
    printf("Please enter in the operator in the equation:");
    scanf_s(" %c", &operator);
    printf("Please enter in the second number:");
    scanf_s("%f", &second);
    printf("Your equation is %0.2f %c %0.2f \n", first, operator, second);
    printf("%f", calculations(first, second, operator));
}

float calculations(float a, float b, char operator) {
    switch(operator) {
        case '+':
            return a + b;
        case '-':
            return a - b;
        case '*':
            return a * b;
        case '/':
            return a / b;
        default:
            return 0;
    }
}
