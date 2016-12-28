#include <stdio.h>

/* count characters in input version 2*/
main() {

    double nc;

    for (nc = 0; getchar() != EOF; ++nc);

    printf("%.0f\n", nc);
}
