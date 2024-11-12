// Given a queue of integers, write a program to reverse the queue, using only the
// following operations:
// i. ii. iii. enqueue(x): Add an item x to rear of queue.
// dequeue() : Remove an item from front of queue.
// empty() : Checks if a queue is empty or not.

void reverseQueue(Queue* q) {
if (empty(q)) {
return;
}
// Dequeue the front element
int x = dequeue(q);
// Recursively reverse the remaining queue
reverseQueue(q);
// Enqueue the dequeued element at the rear
enqueue(q, x);
}
int main() {
Queue q;
initQueue(&q);
// Enqueue some elements in the queue
enqueue(&q, 1);
enqueue(&q, 2);
enqueue(&q, 3);
enqueue(&q, 4);
enqueue(&q, 5);
printf("Original queue: \n");
displayQueue(&q);
}
reverseQueue(&q);
printf("\nReversed queue: \n");
displayQueue(&q);
return 0;