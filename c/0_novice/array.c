#include <stdio.h>

int main() {
	int c, i, nwhite, nother;
	int ndigit[10];

	nwhite = nother = 0;
	for (i = 0; i < 10; ++i) ndigit[i] = 0;

	while ((c = getchar()) != EOF) {
		if (c>='0' && c<='9') ++ndigit[c-'0'];
		/* characters are stored as small integers, so since
		 * 0-9 are stored consecutively, c-'0' is able to
		 * retrieve the integer value of typed numbers
		 */
		else if (c==' ' || c=='\n' || c=='\t') ++nwhite;
		else ++nother;
	}

	printf("digits =");
	for (i = 0; i < 10; ++i) printf(" %d", ndigit[i]);
	printf(", white space = %d, other = %d\n", nwhite, nother);
	return 0;
}
