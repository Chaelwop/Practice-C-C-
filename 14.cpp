#include <stdio.h>

int isPrime (int n) {
	if (n <= 1) return 0;
	for (int i = 2; i <= n/ 2; ++i) {
		if (n % i == 0) {
			return 0;
			
		}
	}
    return 1;
    
}
int main () {
	int start, end;
	printf ("enter the range ( start and end): ");
	scanf ("%d", &start, &end);
	
	printf("prime numbers between %d and %d are:\n",start ,end);
	for (int i = start; i= end; ++i) {
		printf ("%d ", i);
	}
	printf ("\n");
	
	return 0;
}
