//5) A teacher provides his student With a number and a key He wants student to find 
//out many times the key occurs in the number Help the student by writing a program

#include<stdio.h>

int main() {

	int num;
	int key;
	printf("\nEnter Num = ");
	scanf_s("%d",&num);

	printf("\nEnter Key = ");
	scanf_s("%d",&key);

	int count = 0;
	while (num > 0) {
		int lastDigit = num % 10;

		if (lastDigit == key) {
			count++;
		}
		num /= 10;
	}

	printf("\nOccurence Of Key = %d\n",count);


	return 0;
}
