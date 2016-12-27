#include <stdio.h>

int main (void) {

    int x = 1, y = 2, z = 3;
    
    int *ip; /* ip is a pointer to int */
    
    ip = &x; /* ip now points to x */
    
    y = *ip; /* y is now 1 */
    
    printf("Y is now %d\n", y);
    
    *ip = 0; /* x is now 0 */
    
    printf("X is now: %d\n", x);
    
    ip = &z; /* ip now points to z */
    
    *ip = 1; /* z is now 1 */
    
    printf("Z is now: %d\n", z);
    
}
