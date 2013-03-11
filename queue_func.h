#ifndef QUEUE_FUNC_H
#define QUEUE_FUNC_H

struct Node
{
    int data;
    Node *link;
};
struct Queue
{
    Node *beg, *end;
};
bool enqueue( Queue &q, int dt);
int dequeue(Queue &q);
int on_Front(Queue &q);
int on_Back(Queue &q);
bool isEmpty(Queue &q);
void clear(Queue &q);
#endif
