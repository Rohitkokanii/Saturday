//4) Find the maximum of two numbers and display it.
// [using conditional operator]

#include<stdio.h>

int main() {

	int n1, n2;
	printf("\n\nGetting Max No. Using Conditional Operator\n\n");
	printf("Enter Two No. = ");
	scanf_s("%d%d",&n1,&n2);

	(n1 > n2) ? printf("\nMax is = %d\n",n1) : printf("\nMax is = %d\n",n2);

	return 0;
}