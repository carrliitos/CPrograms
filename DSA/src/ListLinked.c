#include <stdio.h>

/* Linked list type data declaration */
typedef struct list {
	int item; // Data item
	struct list *next; // point to the successor
} list;
