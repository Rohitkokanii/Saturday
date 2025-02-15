//4) Find the maximum of two numbers and display it.
// [Use if-else]


#include<stdio.h>

int main() {

	int n1, n2;

	printf("Enter Two No. = ");
	scanf_s("%d%d", &n1, &n2);

	if (n1 > n2) {
		printf("\nMax is %d\n",n1);
	}
	else {
		printf("\nMax is %d\n", n2);
	}
	return 0;
}