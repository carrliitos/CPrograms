#include <stdio.h>

/* Linked list type data declaration */
typedef struct list {
	int item; // Data item
	struct list *next; // point to the successor
} list;

list *search_list(list *l, int x) {
	// check if the list is empty
	if(l == NULL) return(NULL);
	// if the item on the list == x (what we're looking for), return the pointer
	if(l -> item == x)
		return(l);
	else // recursively search the next item
		return(search_list(l -> next, x));
}