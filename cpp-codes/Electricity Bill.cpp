#include<iostream>
using namespace std;
int main()
{
    int U;
    int bill;
    float AfterTax;
    cout<<"Units Consumed ";
    cin>>U;
    if(U<=300)
    {
        bill=U*3;
        cout<<bill;
    }
    else
    {
        bill=U*3.5;
        AfterTax=bill + bill*5/100;
        cout<<"Bill After Tax is "<<AfterTax;
    }
    return 0;

}
