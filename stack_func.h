#ifndef STACK_FUNC_H
#define STACK_FUNC_H

struct Node
{
    int data;
    Node *link;
};
struct Stack
{
    Node *top;
};
bool push ( Stack &q, int dt);
int pop(Stack &q);
void clear(Stack &q);
int onTop(Stack q);
bool isNonempty(Stack q);


#endif
