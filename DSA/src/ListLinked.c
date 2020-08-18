#include <stdio.h>
#include <stdlib.h>

/* Linked list type data declaration */
typedef struct list {
	int item; // Data item
	struct list *next; // point to the successor
} list;

list *search_list(list *l, int x) {
	// check if the list is empty
	if(l == NULL) return(NULL);
	// if the item on the list == x (what we're looking for), return the pointer
	if(l->item == x)
		return(l);
	else // recursively search the next item
		return(search_list(l->next, x));
}

/* Full implementation can be found on LinkedLists.md */
void insert_list(list **l, int x) { // **l = a pointer to a pointer to list node
	// create a temporary pointer
	list *tp;
	// allocate memory to account for the item to be inserted
	tp = malloc(sizeof(list));
	// set the tp's item to x
	tp->item = x;
	// set the tp's next back to the head
	tp->next = *l;
	// copy p to the place pointed to l
	*l = tp;
}

// finding a pointer to the predecessor of the item to be deleted
list *predecessor_list(list *l, int x) {
	// check that the list exists
	if((l == NULL) || (l->next == NULL)) {
		printf("ERROR: predecessor sought on null list.\n");
		return(NULL);
	}
	// return the pointer if found
	if((l->next)->item == x)
		return(l);
	else // recursive approach
		return(predecessor_list(l->next, x));
}

// Deleting the node
delete_list(list **l, int x) {
	// create an item pointer
	list *p;
	// create a predecessor pointer
	list *pred;
	list *search_list(), *predecessor_list();

	p = search_list(*l, x);
	if(p != NULL) {
		pred = predecessor_list(*l, x);
		if(pred == NULL) // splice out the list
			*l = pred->next;
		else
			pred->next = p->next;
		free(p); // free the memory used by the node
	}
}

int main() {
	return 0;
}