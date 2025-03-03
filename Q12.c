#include<stdio.h>

int main() {

	long long int num;
	printf("\nEnter The No. to Check it is factorial or not = ");
	scanf_s("%lld", &num);

	int deno = 2;

	while (num != 1) {
		num /= deno;
		if (num % (deno+1) == 0) {
			deno++;
		}
		else if (num == 1) {
			printf("\nGiven No. is fact of %d \n", deno);
			break;
		}
		else {
			printf("\nGiven No. is not Factorial of any no.\n");
			break;
		}
	}
	
	return 0;
}