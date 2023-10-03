// Loop through an array and add 1 to every even element, then print out 
// the array
// Pat Chambers (z5264081), 3/10/23


#include <stdio.h>

#define SIZE 5

int main(void) {

    // Create an integer array with at least 5 elements.
    int array[SIZE] = {5, 6, 7, 8, 9};

    // Create a while loop which loops through every element of the array.
    int i = 0;
    while (i < SIZE) {
        // Write an if statement which adds 1 to each even value. 
        if (array[i] % 2 == 0) {
            array[i] += 1;
        }
        i++;
    }
    // Write another while loop which goes through the array with a different 
    //      iterator (i.e. if you used i last time, use j)
    int j = 0;
    while (j < SIZE) {
        // Print out the values in the array.
        printf("%d ", array[j]);
        j++;
    }
    printf("\n");


    return 0;
}