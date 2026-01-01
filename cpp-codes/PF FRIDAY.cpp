#include<iostream>
using namespace std;
int main()
{
    int U;
    cout<<"Units Consumed ";
    cin>>U;
    int bill;
    float AfterTax;
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
