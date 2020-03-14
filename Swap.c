#include<stdio.h>
void swap(int *a, int *b); // Function Prototype

int main() {
	int a = 4, b = 6;
	
	printf("Original Numbers: a = %d, b = %d", a, b);
	
	swap(&a, &b); // Passing Address
	
	printf("\nSwapped: a = %d, b = %d", a, b);
	return 0;
}

void swap(int *a, int *b) {
	int temp;
	
	temp = *a;
	*a = *b;
	*b = temp;
}
