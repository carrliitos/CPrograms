# Queue
A *queue* is a collection of items (integers, chars, floats, etc) which allows the following operations:
- `enqueue(i)`: adds an item `i` to the collection
- `dequeue()`: returns and removes the OLDEST item, provided the queue is **not empty**

Besides these operations, a queue can also support the following operations:
- `peek()`: returns the olders item from the collection without removing it
- `size()`: returns the number of items in the queue

![Queue example](./img/Queue.png)

### Pseudocode (*in C++/Java*)
```
int MAX_SIZE = 5, queueSize = 0, front = 0, rear = 0;
int queueArray[MAX_SIZE]; // an array which simulates the queue

function enqueue(int val)
	if(queueSize == MAX_SIZE) then
		"Cannot enqueue! Queue is full";
	else
		queueArray[rear++] = val;
		queueSize++;
		if(rear == MAX_SIZE) then
			rear = 0;

function dequeue()
	if(queueSize == 0) then
		"Cannot dequeue! Queue is empty!";
	else 
		int value = queueArray[front++];
		queueSize--;
		if(front == MAX_SIZE) then
			front = 0;
		return value;

function peek()
	if(queueSize == 0) then
		"Cannot peek! Queue is empty";
	else
		return queueArray[front];

function size()
	return queueSize;
```