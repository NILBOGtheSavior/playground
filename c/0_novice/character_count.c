#include <stdio.h>

void count_while();
void count_for();

int main() {
	// count_while();
	count_for();
	return 0;
}

void count_while() {
	long nc;
	nc = 0;
	while (getchar() != EOF) ++nc;
	printf("%ld\n", nc);
}

void count_for() {
	double nc;

	for (nc = 0; getchar() != EOF; ++nc);
	printf("%.0f\n", nc);
}
