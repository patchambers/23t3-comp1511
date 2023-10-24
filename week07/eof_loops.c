// Get inputs from user until they press ctrl-d using scanf and fgets
// Pat Chambers (z5264081), 24/10/23

#include <stdio.h>

#define MAX_LETTERS 100

int main(void) {

    // When scanf doesn't return 1, it means ctrl-d was pressed (or invalid 
    // scan) - we can stop looping when this happens
    /*
    char input;
    while (scanf(" %c", &input) == 1) {
        printf("scanf input: %c\n", input);
    }
    */

    // fgets scans an entire line of text into a string 
    // When it returns NULL it means that ctrl-d was pressed (or an error) - we 
    // can stop looping when this happens
    char string[MAX_LETTERS];
    while (fgets(string, MAX_LETTERS, stdin) != NULL) {
        printf("fgets input: %s", string);
    }
    

    return 0;
}
