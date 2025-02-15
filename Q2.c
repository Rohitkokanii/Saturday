//2) Accept the age from the user and display appropriate message for issuing of license:
// - Less than 18 years - Display "No license".
// - Above 18 years - Display "Issue license".

#include<stdio.h>

int main() {
	int age;
	printf("Enter Your Age = ");
	scanf_s("%d", &age);

	if (age < 18) {
		printf("\nNo. License\n");
	}
	else {
		printf("\nIssue License\n");
	}

	return 0;
}