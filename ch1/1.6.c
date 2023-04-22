#include <stdio.h>

/* print the value of getchar() != EOF */

int main() {
	int c;

	printf("getchar() != EOF evaluated to... %d\n", getchar() != EOF);

	return 0;
}
