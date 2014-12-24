/* k&r C */
#include <stdio.h>

int main()
{
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

/* f to c*/
	celsius = lower;
printf("----------------------celsius----------------------------------------------------farenheit------\n");
// °C  x  9/5 + 32 = °F
	printf("\n");
	while (celsius <= upper) {
		fahr = (celsius * 9/5) + 32;
		printf("%30f\t%61f\n", celsius, fahr);
		celsius = celsius + step;
	}
}