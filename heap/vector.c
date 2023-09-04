#include <stdio.h>
#include <stdlib.h>

int main() {
	int n_ints = 0;
	int* vec = malloc(sizeof(int)*n_ints);

	while (1) {
		printf("\n");
		printf("======================\n");
		printf("  Menu: \n");
		printf("  (1) Add number to list\n");
		printf("  (2) Print list\n");
		printf("  (3) Exit\n");
		printf("======================\n");

		int c;
		printf("Enter choice: ");
		scanf("%i", &c);
		printf("\n");

		if (c == 1) {
			int n = 0;
			printf("Enter number: ");
			scanf("%i", &n);

			n_ints++;
			vec = realloc(vec, sizeof(int) * n_ints);

			vec[n_ints-1] = n;
		}
		else if (c == 2) {
			for (int i = 0; i < n_ints; i++)
				printf("%i ", vec[i]);
		}
		else
			break;
	}

	free(vec);
	return 0;
}
