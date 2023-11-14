// Demostrating use of free and errors that can occur
// Pat Chambers (z5264081), 7/11/23

#include <stdio.h>
#include <stdlib.h>


struct node {
	int data;		// data item at this node
	struct node *next;		// pointer to the next node
};


int main(void) {

    struct node *head = malloc(sizeof(struct node));
    head->data = 42;
    head->next = NULL;

    printf("Before free: %d\n", head->data);

    // If we don't free this memory, we'll get a memory leak
    // You can check using: dcc --leak-check -o [filename] [c_filename]
    free(head);

    // If we uncomment this line, we'll get a malloc use after free error
    // printf("After free: %d\n", head->data);

    return 0;
}
