#include <stdio.h>
#include <math.h>

int main() {
    int num, originalNum, remainder, result = 0, n = 0;
    
    printf("Enter a number: ");
    scanf("%d", &num);
    
    originalNum = num;
    
    // Count the number of digits
    while (originalNum != 0) { // Corrected condition
        originalNum /= 10;
        ++n;
    }
    
    originalNum = num; // Reset originalNum to the input number
    
    // Calculate the sum of the nth powers of its digits
    while (originalNum != 0) { // Corrected condition
        remainder = originalNum % 10;
        result += pow(remainder, n);
        originalNum /= 10; // Corrected variable name
    }
    
    // Check if the number is an Armstrong number
    if (result == num) {
        printf("%d is an Armstrong number.\n", num);
    } else {
        printf("%d is not an Armstrong number.\n", num);
    }
    
    return 0; // Moved return statement outside of the loop
}
