#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
    int areas[] = { 10, 12, 13, 14, 20 };
    char *name = "Aaron";
	
    char full_name[] = { 'A', 'a', 'r', 'o', 'n', ' ',
		      'V', 'a', 'n', 'A', 'l', 's', 't', 'i', 'n', 'e', '\0',
		      };
	char big_name[3][5] = { 
							{ 'A', 'a', 'r', 'o', 'n' },
							{ ' ', 'J', '.' },
							{ 'V', 'a', 'n' }
						};
    
    printf("The size of an int: %u\n", sizeof(int));
    printf("The size of areas: (int[]): %u\n", sizeof(areas));
    printf("The number of ints in areas: %u\n", sizeof(areas) / sizeof(int));
    
    printf("The size of a char: %u\n", sizeof(char));
    printf("The size of name (char[]): %u\n", sizeof(name));
    printf("The number of chars in name: %u\n", sizeof(name) / sizeof(char));

    printf("The size of full_name (char[]): %u\n", sizeof(full_name));
    printf("The number of chars in full_name: %u\n", sizeof(full_name) / sizeof(char));

    printf("name=\"%s\" and full_name=\"%s\"\n", name, full_name);
	for (size_t r = 0; r < 3; r++) {
		for (size_t c = 0; c < 5; c++) {
			printf("%c ", big_name[r][c]);
		}
	}
	puts("\n");
	
    return EXIT_SUCCESS;
}
