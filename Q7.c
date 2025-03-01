//Gennie wants to choose a lucky 4-digit number for her car. 
// Her lucky numbers are 3 and 5. 
// Help her find the number whose sum of the digits is divisible by 3 or 5.
// write a program to do this.

#include<stdio.h>

int main() {

	int num;

	//using user input
	do{
		printf("\nEnter 4 digit No. = ");
		scanf_s("%d", &num);
		if (num <= 1000) {
			printf("\nInvalid No.\n");
		}
	} while (num <=1000);
	
	int orgNum = num;
	int sum = 0;
	while (num > 0) {
		int lastDigit = num % 10;
		sum += lastDigit;
		num /= 10;
	}

	if (sum % 3 == 0 || sum % 5 == 0) {
		printf("\nLucky No. = %d\n", orgNum);
	}
	else {
		printf("\nNot Lucky\n");
	}

	//using for loop
	/*
	for (int i = 1000; i <= 9999; i++) {
		int num = i;

		int sum = 0;
		while (num > 0) {
			int lastDigit = num % 10;
			sum += lastDigit;
			num /= 10;
		}

		if (sum % 3 == 0 || sum % 5 == 0) {
			printf("%d\n",i);
		}
	}
	*/

	return 0;
}