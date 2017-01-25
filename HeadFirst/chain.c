#include <stdio.h>

int main() {
	int x, y;
	x = 4;
	y = x;

	printf("The value of x is: %i\n", x);
	printf("The value of y is: %i\n", y);


	x++;
	printf("Just incremented the variable x.\n");
	printf("The value of x is: %i\n", x);
	printf("The value of y is: %i\n", y);

	y++;

	printf("Just incremented the variable y.\n");
	printf("The value of x is: %i\n", x);
	printf("The value of y is: %i\n", y);

}
