#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
	size_t i = 0;
	for (i = 1; i < argc; i++) {
		printf("arg %d: %s\n", i, argv[i]);
	}
#if 0
	// this is a two-dimensional array. Each string is one element and each char in
	// each string is another element. Same as char states[][] or char **states
	char *states[] = { "AL", "AK", "AZ", "AR", "CA", "CO", "CT", "DE", "FL", "GA", "HI", "ID", "IL", "IN", "IA", "KS", "KY", "LA", "ME", "MD", "MA", "MI", "MN", "MS", "MO", "MT", "NE", "NV", "NH", "NJ", "NM", "NY", "NC", "ND", "OH", "OK", "OR", "PA", "RI", "SC", "SD", "TN", "TX", "UT", "VT", "VA", "WA", "WV", "WI", "WY" };

	int num_states = 50;
	for (i = 0; i < num_states; i++) {
		printf("%d. %s\n", i+1, states[i]);
	}
#endif

    return EXIT_SUCCESS;
}

