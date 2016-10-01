#include <stdio.h>

// computes sum of 2 integers
int main(){
	int num1, num2, sum;

	printf("Enter the first integer number: ");
	scanf("%d", &num1);


	printf("Enter the second integer number: ");
	scanf("%d", &num2);

	sum = num1 + num2;

	printf("Sum is %d\n", sum);
}
