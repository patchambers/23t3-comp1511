// Demonstrating how to use scanf in a loop when we don't know how many times 
// we will be scanning beforehand
// Pat Chambers (z5264081), 3/10/23

#include <stdio.h>

int main(void) {
    
    int num = 0;

    // scanf returns the number or values that were correctly scanned in
    int result = scanf("%d", &num);
    // If scanf returns something that isn't 1 here, it means that the user 
    // has typed ctrl-d or have tried to input something that isn't an integer
    while (result == 1) {
        printf("scanned: %d\n", num);
        result = scanf("%d", &num);
    }

    // This is a more concise way of doing the same thing, except we check 
    // scanf's return value directly rather than storing it in a variable
    /*
    while (scanf("%d", &num) == 1) {
        printf("scanned: %d\n", num);
    }
    */

    return 0;
}
