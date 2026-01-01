#include<iostream>
using namespace std;
int main()
{
    int counter,outer_counter;
    for(outer_counter=5;outer_counter>=1;outer_counter--)
    {
        for(counter=outer_counter;counter>=1;counter--)
        {
            cout<<"*";
        }
        cout<<"\n";
    }
    return 0;
}
