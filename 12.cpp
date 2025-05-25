#include <stdio.h>

int main() {
	int num,sum = 0;
	printf ("enter a number: ");
	scanf ("%d", &num );
	
	while (num != 0) {
	     sum += num % 10;    // add last digit to sum 
	     num /= 10;          // remove last digit
	     
}
printf("sum of digits: %d\n", sum);

return 0;
}

