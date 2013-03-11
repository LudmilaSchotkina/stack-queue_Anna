#include <iostream>
#include "queue_func.h"
using namespace std;
int main()
{
    Queue q;
    q.beg=NULL;
    q.end=NULL;
    enqueue(q,1);
    enqueue(q,2);
    cout<<"До очистки : ";// внесли 2 элемента
    if ( isEmpty(q))cout<<"Очередь не пуста"<<endl;
    else cout<<"Очередь пуста"<<endl;
    clear(q);
    cout<<"После очистки: ";
    if (isEmpty(q))cout<<"Очередь не пуста"<<endl;
    else cout<<"Очередь пуста"<<endl;
    enqueue(q,3);
    enqueue(q,4);
    cout<<dequeue(q)<<endl;
    cout<<dequeue(q)<<endl;
    enqueue(q,5);
    cout<<dequeue(q)<<endl;
    cout<<dequeue(q)<<endl;
    cout<<dequeue(q)<<endl;
    cout<<dequeue(q)<<endl;


    return 0;
}


