#include <stdio.h>
#include <string.h>

int main() {
    char str[100];
    int start, end, length; // Corrected variable name

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin); // Use fgets instead of gets

    // Remove newline character if present
    str[strcspn(str, "\n")] = 0;

    length = strlen(str);
    end = length - 1;

    for (start = 0; start < end; start++, end--) { // Corrected 'star++' to 'start++'
        if (str[start] != str[end]) {
            printf("The string is not a palindrome.\n"); // Added missing semicolon
            return 0;    
        }
    }
    printf("The string is a palindrome.\n"); // Corrected 'Printf' to 'printf'

    return 0;
}
