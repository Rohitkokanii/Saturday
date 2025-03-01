//Raj is Given a number and a digit. 
// He has to find the power of that number to that digit. 
// Help him by writing a program. 
// if either of the number is negative, print "Invalid Input".

#include<stdio.h>

int main() {

	int num,pow;
	printf("\nEnter No. = ");
	scanf_s("%d", &num);

	if (num < 0) {
		printf("\nInvalid No.\n");
	}


	printf("\nEnter Pow = ");
	scanf_s("%d",&pow);

	//calculate power
	int calPow = 1;
	for (int i = 1; i <= pow; i++) {
		calPow *= num;
	} 
	
	printf("\nPower Of %d is %d",num,calPow);
	return 0;
}