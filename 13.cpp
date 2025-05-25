#include <stdio.h>

int main () {
    int num, reverse = 0;
    printf ("enter a number: ");
    scanf ("%d", &num);
    
    while (num != 0) {
    	reverse = reverse * 10 + num % 10;  // Append last digit to reversen
    	num /= 10; // remove last digit
    	
	}
	
	printf (" reversed number: %d\n", reverse);
	
	return 0;
	
}
