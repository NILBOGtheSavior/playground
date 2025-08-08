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
#define TABLEN 8

void entab();
int respace(int b, int e);

bool inspace = false;

int main() {
	entab();
	return 0;
}

void entab() {
	bool inspace;
	int c;
	char o[MAXLINE];
	int i = 0;
	int b, e;

	while ((c = getchar()) != EOF && i < MAXLINE - 1) {
		if (c == ' ') {
			if (!inspace) {
				b = i;
				inspace = true;
			}
		} else {
			if (inspace) {
				e = i;
				inspace = false;
				int spaces;
				if (e - b >= TABLEN) {
					int tabs = b % e;
					spaces = b - (b % e);
					while (tabs > 0) {
						o[i] = '\t';
						i++;
						tabs--;
					}
					
				} else {
					spaces = e - b;
				}
				while (spaces > 0) {
					o[i] = ' ';
					i++;
					spaces--;
				}
				b = e = 0;
			}
			o[i] = c;
		}
		i++;
	}
	printf("%s\n", o);

}

