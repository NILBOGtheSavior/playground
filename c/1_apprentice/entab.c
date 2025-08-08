// Exercise 1-21
/* Write a program 'entab' that replaces strings 
 * of blanks by the minimum number of tabs and   
 * blanks to achieve the same spacing. Use the   
 * same tab stops as for detab. When either a tab
 * or a single blank would suffice to reach a tab
 * stop, which should be given preference?
 */

#include <stdio.h>
#include <stdbool.h>

#define MAXLINE 1000

void entab();

bool inspace = false;

int main() {
	entab();
	return 0;
}

void entab() {
	bool inspace;
	int c;
	int o[MAXLINE];
	int i = 0;
	int b, e;

	while ((c = getchar()) != EOF && i < MAXLINE - 1) {
		if (c == ' ') {
			if (!inspace) {
				b = i;
				inspace = true;
			}
		} else (
			if (inspace) {
				e = i;
				inspace = false;
				respace(b, e);
				b = e = 0;
			}
			o[i] = c;
		)
		i++;
	}

}

void respace(b, e) {
	
}

