#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char* create_greeting(char* name) {
	int len = strlen("Hello, !");
	len += strlen(name);

	char* greeting = malloc(len+1);
	strcat(greeting, "Hello, ");
	strcat(greeting, name);
	strcat(greeting, "!");

	return greeting;
}

int main() {
	char* name = malloc(64);
	printf("Enter your name: ");
	scanf("%s", name);

	char* greeting = create_greeting(name);

	printf("%s\n", greeting);
	
	free(name);
	free(greeting);
}
