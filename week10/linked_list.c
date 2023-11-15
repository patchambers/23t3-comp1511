// Linked list revision exercises
// Pat Chambers (z5264081), 15/11/23

#include <stdio.h>
#include <stdlib.h>

struct node {
	int data;		// data item at this node
	struct node *next;		// pointer to the next node
};


struct node *add_last(struct node *head, int data);
void print_list(struct node *head);
void free_list(struct node *head);
struct node *delete_node(struct node *head, int data);


int main(void) {

    struct node *list = NULL;
    // list = add_last(list, 5);
    // list = add_last(list, 6);
    // list = add_last(list, 8);
    print_list(list);

    int to_delete = 1;
    printf("After deleting node %d\n", to_delete);
    list = delete_node(list, to_delete);
    print_list(list);

    free_list(list);
    
    return 0;
}


// Append a node with the given data to a linked list
struct node *add_last(struct node *head, int data) {
    struct node *new = malloc(sizeof(struct node));
    new->data = data;
    new->next = NULL;

    // Return new if linked list is initially empty
    if (head == NULL) {
        return new;
    }

    // Otherwise, loop to end of list and add node.
    struct node *curr = head;
    while (curr->next != NULL) {
        curr = curr->next;
    }
    curr->next = new;

    // We are inserting at the end --> head will not change
    return head;
}

// Print the data in a linked list
void print_list(struct node *head) {
    struct node *curr = head;
    while (curr != NULL) {
        printf("%d -> ", curr->data);
        curr = curr->next;
    }
    printf("X\n");
}

// Free all the memory for a given linked list
void free_list(struct node *head) {
    // 1. Set prev and curr pointers
    struct node *prev = NULL;
    struct node *curr = head;
    // Loop through list
    while (curr != NULL) {
        // a. move prev to curr
        prev = curr;
        // b. move curr to curr->next
        curr = curr->next;
        // c. free prev node
        free(prev);
    }

}

// Delete node in list with the specified data
struct node *delete_node(struct node *head, int data) {
    // Edge cases
    // List is empty
    // Data not found
    // Deleting first node
    // Deleting node elsewhere

    // 1. Set prev and curr
    struct node *prev = NULL;
    struct node *curr = head;

	// 2. Loop until curr is at correct node:
    while (curr != NULL && curr->data != data) {
        // 	a. Set prev to curr
        prev = curr;
        // 	b. Set curr to curr->next
        curr = curr->next;
    }

    // If we didn't find data
    if (curr == NULL) {
        printf("Node %d not found!\n", data);
        return head;
    }

    // If deleting first node
    if (prev == NULL) {
        head = curr->next;
        free(curr);
        return head;
    }

	// 3. Set prev->next to curr->next
    prev->next = curr->next;

	// 4. Free curr
    free(curr);

    return head;
}