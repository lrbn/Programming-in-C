#include <stdio.h>

// A pointer is a variable that contains the address of a variable.
// Every pointer points to a specific data type (Exeception: pointer to void)
// The & operator gives the address of an object.
// The urnary operator * is the indirection or deferencing operator; when applied to a pointer, it accesses the object the pointer points to.


int main (void) {

    int x = 1, y = 2, z = 3;
    
    int *ip; /* ip is a pointer to int */
    
    ip = &x; /* ip now points to x (Assigns the address of x to ip (ip points to x)) */
    
    y = *ip; /* y is now 1 */
    
    printf("Y is now %d\n", y);
    
    *ip = 0; /* x is now 0 */
    
    printf("X is now: %d\n", x);
    
    ip = &z; /* ip now points to z */
    
    *ip = 1; /* z is now 1 */
    
    printf("Z is now: %d\n", z);
    
}
