#include <new>
#include "stack_func.h"
using namespace std;

bool push ( Stack &q, int dt)
{
    Node *p=NULL;
    p=new(nothrow) Node;
    if(!p) return false;
    else
    {
        p->data=dt;
        p->link=q.top;
        q.top=p;
        p=NULL;
        return true;
    }
}
int pop(Stack &q)
{
    Node *p=q.top;
    if (p)
    {
        q.top=q.top->link;
        int dt=p->data;
        p->data = 0;
        p->link = NULL;
        delete p;
        p=NULL;
        return dt;
    }
    else return -1;
}
void clear(Stack &q)
{
    Node *p;
    while(q.top)
    {
        p= q.top;
        q.top = q.top->link;
        p->data=0;
        delete p;
        p = NULL;
    }
}
int onTop(Stack &q)
{
    if(q.top) return q.top->data;
    else return -1;
}
bool isEmpty(Stack &q)
{
    if(q.top) return true;
    else return false;
}
