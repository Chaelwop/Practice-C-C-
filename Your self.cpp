#include <stdio.h>
int main () {
	
	char name [100], gr_sec[100], gndr[100], adrs[100];
	int age;
	
	printf("Enter your name: ");
	fgets(name, sizeof(name), stdin);
	
	printf("Enter your grade and section: ");
	fgets(gr_sec, sizeof(gndr), stdin);
	
	printf("Enter your gender: ");
	fgets(gndr, sizeof(adrs), stdin);
	
	printf("Enter your address: ");
	fgets(adrs, sizeof(adrs), stdin);
	
	printf("Enter your age: ");
	scanf("%d", &age);
	
	if (age >= 13 && age <= 17){
		printf("You are a teenager");
	}
	else if (age >=18 && age <= 59){
		printf("You are a adult");
	}
	else if(age >=68){
		printf("You are a senior");
	}
	else{
		printf("You are a minor");
	}
	return 0;
}
