#include <stdio.h>

/*
 temperature_table.c

 This program practices basic variable declaration and manipulation.
 */

#define MIN 0
#define MAX 300
#define STEP 20

void while_temp();
void for_temp();
void for_temp_reversed();
void while_temp_reversed();


int main() {
	for_temp();
	// while_temp();
	// for_temp_reversed();
	// while_temp_reversed();
	return 0;
}

void for_temp() {
	float fahr;

	for (fahr = MIN; fahr<=MAX; fahr+=STEP) {
		printf("%6.1f°F %12.1f°C\n", fahr, (5.0/9.0)*(fahr-32));
	}
}

void while_temp() {
	float fahr, celc;
	fahr = MIN;

	while (fahr <= MAX) {
		celc = (5.0/9.0)*(fahr-32.0);
		printf("%6.0f°F %12.1f°C\n", fahr, celc);
		fahr += STEP;
	}
}

void for_temp_reversed() {
	float fahr;

	for (fahr = MAX; fahr>=MIN; fahr-=STEP) {
		printf("%6.1f°F %12.1f°C\n", fahr, (5.0/9.0)*(fahr-32));
	}
}

void while_temp_reversed() {
	float fahr, celc;
	fahr = MAX;

	while (fahr >= MIN) {
		celc = (5.0/9.0)*(fahr-32.0);
		printf("%6.0f°F %12.1f°C\n", fahr, celc);
		fahr -= STEP;
	}
}
