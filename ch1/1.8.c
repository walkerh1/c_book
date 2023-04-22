#include <stdio.h>

/* count blanks, tabs, and newlines in input */

int main() {
	int c;
	int blanks, tabs, newlines;
	
	blanks = tabs = newlines = 0;
	while ((c = getchar()) != EOF) {
		if (c == '\n') ++newlines;
		else if (c == '\t') ++tabs;
		else if (c == ' ') ++blanks;
	}

	printf("newlines: %d\n", newlines);
	printf("tabs: %d\n", tabs);
	printf("blanks: %d\n", blanks);
	
	return 0;
}
