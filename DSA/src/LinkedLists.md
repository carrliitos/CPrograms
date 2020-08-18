# Linked Lists
- Not a primitive data structure in C
- Primary advantage over arrays is that *linked lists can grow and shrink in size during their lifetime*.
	- Their maximum size need not be known in advance.
- Second advantage is that they provide flexibility in allowing items to be rearranged efficiently.
	- gained at the expense of quick access to any arbitrary item in the list
- A ***Linked List*** is a set of items organized sequentially, just like an array. Except, in a linked list, we use an explicit arrangement in which each item is part of a **node** that also contains a **link** to the next node.

![Linked List](./img/LinkedList.png)

- For our convention, we add a nextra node, `z`, so that the last node of the list will point to `z`, and `z` will point to itself.

![Linked List with a dummy node](./img/DummyNode.png)

- When rearranging the order of our list, we also rearrange our **links**

## Insertion into a list
### At the front of the linked list
- The new node is always added before the head of the given Linked List. And newly added node becomes the new head of the Linked List.
- For example if the given Linked List is `10->15->20->25` and we add an item 5 at the front, then the Linked List becomes `5->10->15->20->25`. 
- Let us call the function that adds at the front of the list is `push()`. The `push()` must receive a pointer to the head pointer, because push must change the head pointer to point to the new node.
- The *complexity* of `push()` is **O(1)** since it does constant amount of work.

![Adding in front](./img/AddingFront.png)

#### Algorithm
Given a reference (pointer to pointer) to the head of the list and an int,
inserts a new node on the front of the list.

```
void push():
	1. Allocate node
	2. Put in the data
	3. Make next of new node as head
	4. Move the head to point to the new node
```

### Add a node after a given node
- We are given pointer to a node, and the new node is inserted after the given node.
- The *complexity* of `insertAfter()` is **O(1)** as it does a constant amount of work.

#### Algorithm

```
void insertAfter():
	1. Check if the given previous node is NULL
	2. Allocate new node
	3. Put in the data
	4. Make next of new node as next of previous nod
	5. Move the next of previous node as the new node
```

### Add a node ad the end
- The new node is always added after the last node of the given Linked List.
- For example if the given Linked List is `5->10->15->20->25` and we add an item 30 at the end, then the Linked List becomes `5->10->15->20->25->30`.
- Since a Linked List is typically represented by the head of it, we have to traverse the list till end and then change the next of last node to new node.
- The *complexity* of `append()` is **O(n)** since we need to reach the end of the list.
	- We can improve this by keep a pointer to the tail of the linked list.

#### Algorithm

```
void append():
	1. Allocate node
	2. Put in the data
	3. This new node is the last node, therefore, we set its next to NULL
	4. If the linked list is empty, make the new node as head
	5. Else, traverse till the last node
	6. Change the next of the last node
```

## Searching a list
- This can be iteratively or recursively, our [example](./ListLinked.c#L9) will show the recursive approach.
	- Basically, let `x` be the item, and if `x` is in our list, it is either the first element (best case), or located in the smaller rest of the list (worst case O(n)). Eventually, we reduce the problem to searching in an empty list, which clearly cannot contain `x`.