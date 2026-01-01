#include <iostream>
using namespace std;

int main()
{
    int **ptr_ptr;
    int *ptr;
    int p=10;
    ptr=&p;
    *ptr_ptr=&ptr;
    cout<<**ptr_ptr;

    return 0;
}
