#include <stdio.h>

int main() {
    // Print a dot-dot square
    printf("Dot-dot square: \n");
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++) {
            printf(".. ");
        }
        printf("\n");
    }

    // Print a dot-dot right triangle
    printf("\nDot-dot right triangle: \n");
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j <= i; j++) {
            printf(".. ");
        }
        printf("\n");
    }

    // Print a dot-dot inverted right triangle
    printf("\nDot-dot inverted right triangle: \n");
    for (int i = 5; i > 0; i--) {
        for (int j = 0; j < i; j++) {
            printf(".. ");
        }
        printf("\n");
    }

    // Print a dot-dot pyramid
    printf("\nDot-dot pyramid: \n");
    int n = 5;
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n - i; j++) {
            printf("  ");
        }
        for (int k = 1; k <= 2 * i - 1; k++) {
            printf("..");
        }
        printf("\n");
    }

    return 0;
}

