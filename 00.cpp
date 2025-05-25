#include <stdio.h>

int main() {
	int terms;
	printf("enter number of terms:");
	scanf("%d", &terms);
	
	long long first = 0, second = 1, next;
	
	printf("fibonnacci Sequence: ");
	for (int i = 1; i <= terms; ++i) {
		if (i == 1) {
		printf("%11d, ", first);
		continue;
	}
	
      if ( i == 2) {
      	printf("%11d, ", second);
      	continue;	
	  }
	  next = first + second;
	  first = second;
	  second = next;
	  
	  printf ("%11d,", next);
}
	  	printf("\n");
	  	
	  	return 0;
}
		

		
		
	


