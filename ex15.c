#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
	int ages[] = { 57, 60, 59, 58, 85 };
	char *names[] = { "Aaron", "Deede", "Eric", "Lisa", "Jack" };
	
	// get the size of ages
	int count = sizeof(ages)/sizeof(int);
	
	for (size_t i=0; i<count; i++) {
		printf("%s is %d years old.\n", names[i], ages[i]);
	}
	printf("+++\n");
	
	// set-up pointers to start of the arrays
	int *cur_age = ages;
	char **cur_name = names;
	
	for (size_t i=0; i<count; i++) {
		printf("%s is %d years old.\n", *(cur_name + i), *(cur_age + i));
	}
	printf("+++\n");
	
	// pointers are just arrays
	for (size_t i=0; i<count; i++) {
		printf("%s is %d years old.\n", cur_name[i], cur_age[i]);
	}
	
    return EXIT_SUCCESS;
}
