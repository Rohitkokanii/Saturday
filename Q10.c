//Q10

#include<stdio.h>

int main() {

	for (int i = 1; i <= 5; i++) {
		for (int j = 1; j <= 5; j++) {
			if (i == 1 && j <= 4 || i == 2 && j <= 3 || i==3 && j<=2|| i == 4 && j <=1) {
				printf("   ");
			}
			else {
				printf(" * ");
			}
		}
		printf("\n");
	}

	return 0;
}