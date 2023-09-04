#include <stdio.h>

void add(int n1, int n2) {
	int val = n1 + n2;
	printf("%i + %i = %i", n1, n2, val);
}

void subtract(int n1, int n2) {
	int val = n1 - n2;
	printf("%i - %i = %i", n1, n2, val);
}

void multiply(int n1, int n2) {
	int val = n1 * n2;
	printf("%i * %i = %i", n1, n2, val);
}

void divide(int n1, int n2) {
	float val = (float)n1 / (float)n2;
	printf("%i / %i = %.2f", n1, n2, val);
}


int main() {
	while (1) {
		printf("\n");
		printf("======================\n");
		printf("  Menu: \n");
		printf("  (1) Add\n");
		printf("  (2) Subtract\n");
		printf("  (3) Multiply\n");
		printf("  (4) Divide\n");
		printf("  (5) Exit\n");
		printf("======================\n");

		int c;
		printf("Enter choice: ");
		scanf("%i", &c);
		printf("\n");

		if (c == 5)
			break;
		else if (!(c == 1 || c == 2 || c == 3 || c == 4)) {
			printf("Invalid Input. Please enter 1/2/3/4/5 depending on your choice.");
			continue;
		}
		
		int n1;
		printf("Enter 1st number: ");
		scanf("%i", &n1);
		int n2;
		printf("Enter 2nd number: ");
		scanf("%i", &n2);

		if (c == 1)
			add(n1, n2);
		else if (c == 2)
			subtract(n1, n2);
		else if (c == 3)
			multiply(n1, n2);
		else if (c == 4)
			divide(n1, n2);
	}
}
