/*
Write menu driven program;
1. Find Factorial
2. find Square
3. Exit
*/

#include<stdio.h>
#include "function.h"

int main() {
	int choice;
	printf("\nEnter \n1.Find Factorial \n2.Find Square \n3.Exit \n= ");
	scanf_s("%d",&choice);

	switch (choice) {
		int num;
	case 1:printf("\n1.Factorial Enter Num = ");
		scanf_s("%d", &num);
		printf("\nFactorial = %d\n", fact(num));
		break;
	case 2:
		printf("\n2. Square Enter Num = ");
		scanf_s("%d", &num);
		printf("\nSquare = %d\n", sqr(num));
		break;
	case 3:
		printf("\nExit\n");
		break;
	default:
		printf("\nInvalid\n");
	}

	return 0;
}