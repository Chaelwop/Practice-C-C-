#include <stdio.h>

// Function to calculate the sum of two numbers
int sum(int a, int b) {
    return a + b;
}

// Function to calculate the product of two numbers
int product(int a, int b) {
    return a * b;
}

int main() {
    int x, y;
    printf("Enter the first number: ");
    scanf("%d", &x);
    printf("Enter the second number: ");
    scanf("%d", &y);

    printf("The sum of %d and %d is: %d\n", x, y, sum(x, y));
    printf("The product of %d and %d is: %d\n", x, y, product(x, y));

    return 0;
}

