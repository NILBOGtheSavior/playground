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

	int seq = 0;
	
	while ((c = getchar()) != EOF && i < MAXLINE - 1) {
		if (c == ' '){
			if (inspace) {
				seq++;
			}
		} else {
			if (inspace) {
				inspace = false;
			}
		}
	}
	printf("%s\n", o);

}

