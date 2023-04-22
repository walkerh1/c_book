#include <stdio.h>

/* 
 * copies input to output, replacing each string of one or
 * more blanks with a single blank
 */

int main() {
	int c;

	while ((c = getchar()) != EOF) {
		if (c == ' ') {
			while ((c = getchar()) == ' ')
				;
	    	putchar(' ');	
		}	
		putchar(c);
	}

	return 0;
}
