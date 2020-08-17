/* A complete working program to demonstrate all insertion methods on a linked list */

#include <stdio.h>
#include <stdlib.h>

// A linked list node
struct Node {
	int data;
	struct Node *next;
};

/* Given a reference (pointer to pointer) to the head of a list, and an int
	inserts a new node on the front of the list */
void push(struct Node** head_ref, int new_data) {
	// Allocate node
	struct Node* new_node = (struct Node*) malloc(sizeof(struct Node));
	// put in the data
	new_node->data = new_data;
	// make next of new node as head
	new_node->next = (*head_ref);
	// move the head to point to the new node
	(*head_ref) = new_node;
}

/* Given a node prev_node, insert a new node after the given prev_node */
void insertAfter(struct Node* prev_node, int new_data) {
	// Check if the given prev_node is NULL
	if(prev_node == NULL) {
		printf("The given previous node cannot be NULL");
		return;
	}
	// Allocate new node
	struct Node* new_node = (struct Node*) malloc(sizeof(struct Node));
	// Put in the data
	new_node->data = new_data;
	// Make next of new node as next of prev_node
	new_node->next = prev_node->next;
	// Move the next of prev_node as new_node
	prev_node->next = new_node;
}

/* Given a reference (pointer to pointer) to the head of a list
	and an int, appens a new node at the end */
void append(struct Node** head_ref, int new_data) {
	// Allocate node
	struct Node* new_node = (struct Node*) malloc(sizeof(struct Node));
	struct Node *last = *head_ref; // used in step 5
	// put in the data
	new_node->data = new_data;	
	// this new node is going to be the last node, so make next of it as NULL
	new_node->next = NULL;
	// if the linked list is empty, then make the new node as head
	if(*head_ref == NULL) {
		*head_ref = new_node;
		return;
	}
	// Else traverse till the las node
	while(last->next != NULL) {
		last = last->next;
	}
	// change the next of last node
	last->next = new_node;
	return;
}

/* printList() prints the contents of our Linked List starting from head */
void printList(struct Node *node) {
	while(node != NULL) {
		printf(" %d ", node->data);
		node = node->next;
	}
}

int main() {
	// Start with an empty list
	struct Node* head = NULL;
	// Insert 13, so we have 13->NULL
	append(&head, 13);

	// Insert 15 at the beginning; 15->13->NULL
	push(&head, 7);
	
	// Insert 1 at the beginning; 1->15->13->NULL
	push(&head, 1);
	
	// Insert 4 at the end; 1->15->13->4->NULL
	insertAfter(&head, 4);
	
	// Insert 8 after 15; 1->15->8->13->4->NULL
	insertAfter(head->next, 8);

	printf("\nCreated Linked list is: ");
	printList(head);

	return 0;
}