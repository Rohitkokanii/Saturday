#include<stdio.h>

int main() {

	for (int i = 1; i <= 5; i++) {
		for (int j = 1; j <= 5; j++) {
			if (i == 2 && j <= 1) {
				printf(" ");
			}
			else if (i == 3 && j <= 1) {
				printf("  ");
			}
			else if (i == 4 && j <= 1) {
				printf("   ");
			}
			else if (i == 5 && j <= 1) {
				printf("    ");
			}
			printf("*");
		}
		printf("\n");
	}
	return 0;
}