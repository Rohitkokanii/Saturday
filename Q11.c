#include<stdio.h>

int main() {

	for (int i = 1; i <= 5; i++) {
		for (int j = 1; j <= 5; j++) {
			if (i == 2 && j<=2) {
				printf("   ");
			}
			printf(" * ");
		}
		printf("\n");
	}
	return 0;
}