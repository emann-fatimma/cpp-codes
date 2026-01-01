#include<iostream>
using namespace std;
int main()
{
    int num=0;
    int counter,x;
    cout<<"enter any number:"<<endl;
    cin>>num;
    for(counter=2;counter<num;counter++)
    {
        if(num%counter==0)
        {
            x=0;
        }
    }
    if(x==0)
        cout<<"The number is not a prime number";
    else
        cout<<"Prime Number";
        return 0;
}
