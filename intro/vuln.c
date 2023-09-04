#include <stdio.h>

int vuln() {
	char input[64];
	puts("What is your name?\n");
	gets(input);

	printf("Hello %s!\n", input);
}

int main() {
	vuln();
}
