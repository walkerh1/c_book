#include <stdio.h>

/* print Farenheit-Celsius table */

float fahrToCelc(float fahr);

int main() {
	float fahr;
	int lower, upper, step;

	lower = 0;
	upper = 300;
	step = 20;
	
	printf("Fahr Celcius\n");

	fahr = lower;
	while (fahr <= upper) {
		printf("%3.0f %6.1f\n", fahr, fahrToCelc(fahr));
		fahr += step;
	}

	return 0;
}

float fahrToCelc(float fahr) {
    return (5.0/9.0) * (fahr-32.0);
}