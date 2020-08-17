#include <stdio.h>
#include <stdlib.h>

struct node {
	/* Lists are made up of nodes, each node containing an integer and 
		a pointer to the next node. The key is an integer. */
	int key;
	struct node *next;
};
/* head is a pointer to the first node on a list, z is the pointer to the 
dummy node representing the end of the list. */
struct node *head, *z, *t;

int listInitialize() {
	head = (struct node*) malloc(sizeof *head);
	z = (struct node*) malloc(sizeof *z);
	head->next = z;
	z->next = z;
}

int deleteNext(struct node *t) {
	t->next = t->next->next;
}

struct node *insertAfter(int v, struct node *t) {
	struct node *x;
	x = (struct node*) malloc(sizeof *x);
	x->key = v;
	x->next = t->next;
	t->next = x;
	return x;
}

int main() {
	return 0;
}