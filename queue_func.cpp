#include "queue_func.h"
#include <new>
using namespace std;

bool enqueue( Queue &q, int dt)
{
    Node *p=NULL;
    p=new(nothrow) Node;
    if(!p) return false;
    else
    {
        p->data=dt;
        p->link=NULL;
        if (q.end)q.end->link=p;
        q.end=p;
        if (!q.beg)q.beg=q.end;
        return true;
    }
}
int dequeue(Queue &q)
{
    Node *p=q.beg;
    if (p)
    {
        q.beg=q.beg->link;
        int dt=p->data;
        p->data = 0;
        p->link = NULL;
        delete p;
        p=NULL;
        if (!q.beg)q.end=NULL;
        return dt;
    }
    else return -1;
}
int on_Front(Queue &q)
{
    if (q.beg)return q.beg->data;
    else return -1;
}
int on_Back(Queue &q)
{
    if (q.end)return q.end->data;
    else return -1;
}
bool isNonempty(Queue q)
{
    if(q.beg!=0 && q.end!=0) return true;
    else return false;
}
void clear(Queue &q)
{
    Node *p;
    while(q.end)
    {
        p= q.end;
        q.end=q.end->link;
        p->data=0;
        delete p;
        p = NULL;
    }
}
