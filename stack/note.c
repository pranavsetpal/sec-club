#include <stdio.h>

int main() {
	char note[128];
	while (1) {
		printf("\n");
		printf("======================\n");
		printf("  Menu: \n");
		printf("  (1) Enter new note\n");
		printf("  (2) Read last note\n");
		printf("  (3) Exit\n");
		printf("======================\n");

		int c;
		printf("Enter choice: ");
		scanf("%i", &c);
		printf("\n");


		if (c == 1) {
			printf("Enter Note: ");
			scanf("%s", note);
		}
		else if (c == 2)
			printf("Last note: %s\n", note);
		else if (c == 3)
			break;
		else
			printf("Incorrect option. Please enter 1/2/3 depending on your choice");
	}
}
