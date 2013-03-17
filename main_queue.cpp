#include <iostream>
#include <fstream>
#include "queue_func.h"
using namespace std;
void test_queue()
{
    Queue q;
    q.beg=NULL;
    q.end=NULL;
    ifstream fin("test.in");
    ofstream fout("test.out");
    char a;
    int number;
    fin>>a;
    while(!fin.eof())
    {
        switch (a)
        {
        case 'i':
            fin>>number;
            enqueue(q,number);
            break;
        case 'o':
          if (!isNonempty(q))fout<<"error"<<" ";
          else fout<<dequeue(q)<<" ";
            break;
        }
        fin>>a;
    }
    if (!isNonempty(q))fout<<"nonempty"<<" ";
    clear(q);
    if (!isNonempty(q))fout<<"nonempty"<<" ";
    else fout<<"empty";
}
int main()
{
    test_queue();
    return 0;
}

