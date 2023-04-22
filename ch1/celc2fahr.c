#include <stdio.h>

int main() {
	float celcius, fahr;
	int lower, upper, step;

	lower = -20;
	upper = 150;
	step = 10;

	printf("celcius  fahr\n");

	celcius = lower;
	while (celcius <= upper) {
		fahr = (9.0/5.0) * celcius + 32.0;
		printf("%7.0f %6.1f\n", celcius, fahr);
		celcius += step;
	}

	return 0;
}
