// Demonstrating use of 2D linked lists
// Pat Chambers (z5264081), 14/11/23

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_STR_LEN 100

struct book {
    char name[MAX_STR_LEN];
    struct book *next;
};

struct shelf {
    char shelf_name[MAX_STR_LEN];
    struct book *books;
    struct shelf *next;
};

struct book *create_book(char *name);
struct shelf *create_shelf(char *shelf_name);
void print_shelf(struct shelf *shelf);

int main(void) {

    struct shelf *head_shelf = create_shelf("Favourites");
    head_shelf->next = create_shelf("Mystery");
    head_shelf->next->next = create_shelf("Crime");
    add_book_to_shelf(head_shelf, "Favourites", "1984");

    print_shelf(head_shelf);

    return 0;
}

// Create a new book with the given `name`
// Returns a pointer to the new struct book
struct book *create_book(char *name) {
    struct book *new_book = malloc(sizeof(struct book));
    strcpy(new_book->name, name);
    new_book->next = NULL;
    return new_book;
}

// Create a new shelf with the given `shelf_name`
// Returns a pointer to the new struct shelf
struct shelf *create_shelf(char *shelf_name) {
    struct shelf *new_shelf = malloc(sizeof(struct shelf));
    strcpy(new_shelf->shelf_name, shelf_name);
    new_shelf->books = NULL;
    new_shelf->next = NULL;
    return new_shelf;
}

// Print out the names of all the books on a shelf
void print_shelf(struct shelf *shelf) {
    printf("Books on shelf '%s': \n", shelf->shelf_name);

    struct book *current = shelf->books;
    while (current != NULL) {
        printf("    Book: %s\n", current->name); 
        current = current->next;
    }
}

// Add new book with `book_name` to end of shelf with `shelf_name`
void add_book_to_shelf(
    struct shelf *head_shelf, char *shelf_name, char *book_name
) {

    // 1. Find correct shelf
    struct shelf *curr_shelf = head_shelf;
    while (curr_shelf != NULL && strcmp(curr_shelf->shelf_name, shelf_name) != 0) {
        curr_shelf = curr_shelf->next;
    }
    if (curr_shelf == NULL) {
        printf("Shelf '%s' does not exist\n", shelf_name);
        return;
    }

    // 2. Create new book
    struct book *new_book = create_book(book_name);

    // 3. Find last book on shelf

    // If shelf empty, change books pointer of shelf to point at new book
    if (curr_shelf->books == NULL) {
        curr_shelf->books = new_book;
        return;
    }

    // struct book *curr_book = curr_shelf->books;
    while (curr_shelf->books->next != NULL) {
        curr_shelf->books = curr_shelf->books->next;
    }

    // 4. Add new book to end of books list
    curr_book->next = new_book;

}


