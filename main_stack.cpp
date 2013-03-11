#include <iostream>
#include "stack_func.h"
#include <new>
using namespace std;


int main()
{
    Stack q;
    q.top=NULL;
    push(q,1);
    push(q,2);
    if ( isEmpty(q))cout<<"Стек не пуст"<<endl;
    else cout<<"Стек пуст"<<endl;
    onTop(q);
    push(q,3);
    clear(q);
    cout<<"После очистки :"<<endl;
    if ( isEmpty(q))cout<<"Стек не пуст"<<endl;
    else cout<<"Стек пуст"<<endl;
    push(q,4);
    cout<<pop(q)<<endl;
    cout<<pop(q)<<endl;
    cout<<pop(q)<<endl;
    cout<<pop(q)<<endl;

     return 0;
}
