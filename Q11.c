#include<stdio.h>

int main() {

	for (int i = 1; i <= 5; i++) {
		for (int k = 1; k < i; k++) {
			printf(" ");
		}
		for (int j = 1; j <= 5; j++) {
			printf("*");
		}
		printf("\n");//print * in next line
	}
	return 0;
}