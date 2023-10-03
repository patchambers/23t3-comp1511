// Scans in the temperature for each day in a week, then print out the 
// maximum temperature that was scanned in
// Pat Chambers (z5264081), 3/10/23

#include <stdio.h>

#define NUM_DAYS 7

int main(void) {

    // Scan temperature values into an array
    double temperatures[NUM_DAYS] = {0.0};

    int i = 0;
    while (i < NUM_DAYS) {
        scanf("%lf", &temperatures[i]);
        i++;
    }

    // Find the maximum temperature and print it out
    int j = 0;
    double current_max = temperatures[0];
    while (j < NUM_DAYS) {

        if (temperatures[j] > current_max) {
            current_max = temperatures[j];
        }
        j++;
    }

    printf("Maximum temperature: %lf \n", current_max);

    return 0;
}