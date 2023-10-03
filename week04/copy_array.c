// Implement the copy_array procedure, following each of these tasks
// 1. Create an array of doubles with 3 elements: 1.1, 2.2 and 3.3.
// 2. Create another array of doubles with 10 elements where every element
// initialised to 0.0.
// 3. Create a while loop that loops through every element of the first array.
// 4. Copy the elements of the first array into the second array (leave 0's at
// the end)
// 5. Create a while loop that prints out all the elements of the second array.

#include <stdio.h>

#define NUMS_SIZE 3
#define ZEROS_SIZE 10

int main(void) {

    double num[3] = {1.1, 2.2, 3.3};
    double arr[10] = {0.0};

    int i = 0;

    while (i < NUMS_SIZE) {
        arr[i] = num[i];
        i++;
    }

    int j = 0;
    while (j < ZEROS_SIZE) {
        printf("%lf\n", arr[j]);
        j++;
    }

    return 0;
}
