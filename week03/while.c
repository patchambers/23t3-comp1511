// Basic while loop program
// Pat Chambers (z5264081), 26/9/23

#include <stdio.h>

int main (void) {

    // Initialise our counting variable 'i' to 0
    int i = 0;
    // Continue until i is equal to 5
    while (i < 5) {
        // Print 5 x i
        printf("%d\n", i * 5);
        // Increment i by 1
        i = i + 1;
    }

    return 0;
}
