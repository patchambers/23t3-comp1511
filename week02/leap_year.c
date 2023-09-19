// Program to determine whether a given year is a leap year 
// or common year
// Pat Chambers (z5264081), 19/9/23

#include <stdio.h>

int main(void) {

    printf("Please enter a year: ");
    int year;
    scanf("%d", &year);

    if (year % 4 == 0) {
        
        if (year % 100 == 0) {

            if (year % 400 == 0) {
                printf("%d is a leap year\n", year);
            } else {
                printf("%d is a common year\n", year);
            }

        } else {
            printf("%d is a leap year\n", year);
        }

    } else {
        printf("%d is a common year\n", year);
    }

    return 0;
}

