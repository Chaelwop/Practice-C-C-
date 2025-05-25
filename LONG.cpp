#include <stdio.h>

int main() {
    // Declare variables
    int num1, num2, sum;

    // Prompt the user to input two numbers
    printf("Enter the first number: ");
    scanf("%d", &num1);
    printf("Enter the second number: ");
    scanf("%d", &num2);

    // Add the two numbers
    sum = num1 + num2;

    // Display the result
    printf("The sum is: %d\n", sum);

    return 0;
}

