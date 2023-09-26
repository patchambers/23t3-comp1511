// Program to demonstrate use of structs
// Patrick Chambers (z5264081), 26/9/23

#include <stdio.h>

// This is our struct definition - remember that this just defines what a 
// 'struct person' variable will be made up of, it doesn't declare any 
// variable by itself
struct person {
    int shoe_size;
    double height;
    char first_name_initial;
};

int main(void) {

    // Declaring a struct person variable called 'sasha'
    // Remember that 'struct person' is the variable type!
    struct person sasha;
    // Initialise the fields of the struct person using sasha.<field_name>
    sasha.shoe_size = 7;
    sasha.height = 1.59;
    sasha.first_name_initial = 'S';
    printf(
        "Sasha is %lfm tall and her shoe size is %d\n", 
        sasha.height,     
        sasha.shoe_size
    );

    // We can make another variable with the type 'struct person' so we can 
    // the same information about another person
    struct person jake;
    jake.shoe_size = 11;
    jake.height = 1.75;
    jake.first_name_initial = 'T';
    printf("Jake is %lfm tall\n", jake.height);

    return 0;
}
