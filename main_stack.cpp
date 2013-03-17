#include <iostream>
#include "stack_func.h"
#include <fstream>
using namespace std;
void test_stack()
{
    Stack q;
    q.top=NULL;
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
            push(q,number);
            break;
        case 'o':
          if ( !isNonempty(q))fout<<"error"<<" ";
          else fout<<pop(q)<<" ";
            break;
        }
        fin>>a;
    }
    if ( isNonempty(q))fout<<"nonempty"<<" ";
    clear(q);
    if ( isNonempty(q))fout<<"nonempty"<<" ";
    else fout<<"empty";
}

int main()
{
    Stack q;
    q.top=NULL;
    test_stack();
    return 0;
}
