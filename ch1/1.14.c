#include <stdio.h>

#define NUM_CHARS 26

/* prints a histogram of different lowercase alphabetic characters in input */

int main() {
	int i, c, counter;
	int freqs[NUM_CHARS];
	
    // initialise freqs to all zeros
	for (i = 0; i < NUM_CHARS; i++)
		freqs[i] = 0;

    // process input
	counter = 0;
	while ((c = getchar()) != EOF) {
		if (c >= 'a' && c <= 'z')
            freqs[c-'a']++;
	}

    // print histogram
	int curr;
	for (i = 0; i < NUM_CHARS; i++) {
		printf("%c: ", i+'a');
		curr = freqs[i];
		while (curr > 0) {
			putchar('=');
			curr--;
		}
		putchar('\n');
	}

	return 0;
}
