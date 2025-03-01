//3) find the sum of all even numbers from 1 to 20- Modfy the program to accept the lower
// and upper limit from the user -

#include<stdio.h>

int main() {

	int min, max;
	printf("\nEnter Min Max No.= ");
	scanf_s("%d%d",&min,&max);
	int sum = 0;
	for (int i = min; i <= max; i++) {
		if (i % 2 == 0){
			sum += i;
		}
	}

	printf("\nSum of Even No.in Range %d to %d is = %d\n",min,max,sum);

	return 0;
}