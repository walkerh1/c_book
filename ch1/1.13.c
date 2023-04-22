#include <stdio.h>

#define IN 1
#define OUT 0

// e.g. WORD_LENGTH_LIMIT of 11 means max word length is 10
#define WORD_LENGTH_LIMIT 11

/* prints a histogram of length of words in input */

int main() {
	int i, c, state, counter;
	int wlengths[WORD_LENGTH_LIMIT];
	
	for (i = 0; i < WORD_LENGTH_LIMIT; i++)
		wlengths[i] = 0;

	counter = 0;
	state = OUT;
	while ((c = getchar()) != EOF) {
		if (c == ' ' || c == '\n' || c == '\t') {
			if (state == IN) {
				wlengths[counter]++;
				counter = 0;
			}
			state = OUT;
		} else if (state == OUT) {
			state = IN;
			if (counter+1 < WORD_LENGTH_LIMIT) counter++;
		} else {
			if (counter+1 < WORD_LENGTH_LIMIT) counter++;
		}
	}

	int curr;
	for (i = 1; i < WORD_LENGTH_LIMIT; i++) {
		printf("%d: ", i);
		curr = wlengths[i];
		while (curr > 0) {
			putchar('=');
			curr--;
		}
		putchar('\n');
	}

	return 0;
}
