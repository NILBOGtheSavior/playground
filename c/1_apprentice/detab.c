// Exercise 1-20
/* Write a program 'detab' that replaces tabs in 
 * the input with the proper number of blanks to 
 * space to the next tab stop. Assume a fixed set
 * of tab stops, say every n columns. Should n be
 * a variable or a symbolic parameter?
 */

#include <stdio.h>

#define MAXLINE 1000

void detab(int n);

int main() {
	// detab(4);
	detab(12);
	return(0);
}

void detab(int n) {
	char ct[MAXLINE];
	int c;
	int i = 0;

	while ((c=getchar()) != EOF && i < MAXLINE - 1) {
		if (c == '\t') {
			// add spaces
			int s = n - (i % n);

			for (int j = 0; j < s; j++) {
				ct[i++] = ' ';
			}
		} else {
			// add to ct
			ct[i++] = c;
		}
	}
	ct[i] = '\0';
	printf("%s\n", ct);
}
