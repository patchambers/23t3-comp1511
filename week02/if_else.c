// Program to demonstrate use of if and else
// Pat Chambers (z5264081), 20/9/23

#include <stdio.h>

int main(void) {

    printf("Enter 2 numbers: ");
    // scan in ints a and b
    int a;
    int b;
    scanf("%d %d", &a, &b);

    // if a < b, print error
    if (a < b) {
        printf("a cannot be less than b!\n");
    } else {
        // if b == 0, print error
        if (b == 0) {
            printf("b cannot be 0!\n");
        } else {
            // else,  print a/b
            printf("As integer: a / b = %d\n", a / b);
            printf("As double: a / b = %lf\n", (a * 1.0) / b);
        }

    }

    return 0;
}