/* Fahrenheit to Celsius conversion table */

#include <stdio.h>

int main(void) {

    float fahr, celsius;
    int lower, upper, step;

    /* Set lower and upper limits of the temperatures table (in Fahrenheit)
       along with the table increment step-size */
    lower = 0;
    upper = 300;
    step = 20;

    /* Create conversion table using the equation : C = (5/9) (F - 32) */
    fahr = lower;

    while (fahr <= upper) {

    celsius = (5.0/9.0) * (fahr - 32.0);
    printf("%3.0f \t%6.1f\n", fahr, celsius);
    fahr += step;
    }
}
