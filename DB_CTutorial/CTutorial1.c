/* Multiline
Comment */

// Single line comment

#include <stdio.h>
#include <string.h>

#define MYNAME "Brandon Nguyen" // Constant

int globalVar = 100;

main() {
    
    char firstLetter = 'B'; 
    
    int age = 38;

    long int superBigNumber = -327670000;    

    float piValue = 3.14159;

    double reallyBigPi = 3.1459145914591459;

    printf("\n"); // Skip a line

    printf("This will print to screen\n\n"); // Two line breaks
    
    printf("I am %d years old\n\n", age);

    printf("Big Number %ld\n\n", superBigNumber);

    printf("Pi = %.5f\n\n", piValue);

    printf("Big Pi = %.15f\n\n", reallyBigPi);

    printf("The first letter in my name is %c\n\n", firstLetter);

    printf("My name is %s\n\n", "Brandon");

    char myName[15] = "Brandon Nguyen"; // Always provide room for \0 (String terminator)
    
    strcpy(myName, "Bob Smith"); // Replace myName with "Bob Smith"

    printf("My name is %s\n\n", myName);
    
}

