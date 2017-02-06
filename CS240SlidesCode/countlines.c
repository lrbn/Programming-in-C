#include <stdio.h>

int main() {

	int nlines = 0;

	int c;

	while ((c = getchar()) != EOF) {
	
		if (c== '\n') nlines++;

	}

	printf("Number of lines: %d\n", nlines);

}
