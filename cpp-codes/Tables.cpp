#include<iostream>
using namespace std;
int main()
{
    int counter=0;
    int outer_counter;
    for (outer_counter=2;outer_counter<=8;outer_counter++)
    {for(counter=1;counter<=10;counter++)
    {



       cout<<outer_counter<<"x"<<counter<<"="<<outer_counter*counter<<endl;
    }
    }


    return 0;
}
