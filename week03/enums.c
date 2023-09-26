// Program to demonstrate use of enums
// Patrick Chambers (z5264081), 26/9/23

#include <stdio.h>

// Defining the values that an 'enum opal_card_type' can take
enum opal_card_type {
    ADULT, 
    STUDENT, 
    CONCESSION
};

// We can include an enum in a struct just like any other kind of variable
struct person {
    int shoe_size;
    double height;
    char first_name_initial;
    enum opal_card_type card_type;
};


int main(void) {

    // The variable type here is 'enum opal_card_type' and the variable name 
    // is 'sashas_card'
    enum opal_card_type sashas_card = ADULT;

    // Declaring and initialising a struct person with enum opal_card_type
    struct person Jake;
    Jake.shoe_size = 11;
    Jake.height = 1.75;
    Jake.first_name_initial = 'J';
    Jake.card_type = ADULT;

    // We can compare Jake's card type by using the name of the enum field
    // i.e. ADULT, STUDENT or CONCESSION
    double train_fare = 0.0;
    if (Jake.card_type == ADULT) {
        train_fare = 4.40;
    } else if (Jake.card_type == STUDENT) {
        train_fare = 2.20;
    } else if (Jake.card_type == CONCESSION) {
        train_fare = 4.30;
    }

    printf("Jake's train fare is $%.2lf\n", train_fare);

    return 0;
}
