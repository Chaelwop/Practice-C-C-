#include <Stdio.h>

int main(){
	
	char name[100], gr_sec[100], gndr[100], adrs[100];
	int age;
	
	Printf("Enter your name: ");
	fgets(name, sizeof(name), stdin);
	
	Printf("Enter your grade and section: ");
	fgets(gr_sec, sizeof(gr_sec), stdin)
	
	Printf("Enter your gender: ")
	fgets(gndr, sizeof(gndr), stdin)
	
	Printf("Enter your address: ");
	fgets(adrs, sizeof(adrs), stdin)
	
	Printf("Enter your age: ");
	scanf("%d", &age);

	if (age >= 13 && <= 17){
		printf("Your are a teenager");
	}
		 else if (age >= 18 && <= 59){
		printf("Your are a adult");
	}
		 else if (age >= 68 && <= 17){
		printf("Your are a senior");
	}
		else{
			printf("Your are a minor");
		
		}
	}
	return 0;


}
