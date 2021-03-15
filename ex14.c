#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

void print_letters(char[]);
	
void print_arguments(int argc, char *argv[]) {
	for (size_t i=0; i<argc; i++) {
		print_letters(argv[i]);
	}
}

void print_letters(char arg[]) {
	for (size_t i=0; arg[i] != '\0'; i++) {
		char ch = arg[i];
		if ( isalpha(ch) ) {
			printf("'%c' == %d ", ch, ch);
		}
	}
	printf("\n");
}
	
int main(int argc, char *argv[]) {
	print_arguments(argc, argv);

    return EXIT_SUCCESS;
}
