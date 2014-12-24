#include <stdio.h>

int main()
{
// adding a comment
// °C  x  9/5 + 32 = °F

// (°F  -  32)  x  5/9 = °C

	float fahr, celsius;
	int lower, upper, step;

	lower = 0;
	upper = 300;
	step = 10;

	fahr = lower;
	printf("----------------------farenheit----------------------------------------------------celsius------\n");
	printf("\n");
	while (fahr <= upper) {
		celsius = 5 * (fahr-32) / 9;
		printf("%30f\t%61f\n", fahr, celsius);
		fahr = fahr + step;
	}
	fahr = lower;

printf("----------------------farenheit----------------------------------------------------celsius------\n");
	printf("\n");
	while (fahr <= upper) {
		celsius = 5 * (fahr-32) / 9;
		printf("%30f\t%61f\n", fahr, celsius);
		fahr = fahr + step;
	}
}