#include<iostream>
using  namespace std;
int main()
{
    int num,a,b,c,d;
    cout<<"Enter a four digit Number ";
    cin>>num;
    a=num/1000%10;
    b=num/100%10;
    c=num/10%10;
    d=num%10;
    cout<<"\n"<<a<<"\t"<<b<<"\t"<<c<<"\t"<<d;
    return 0;
}
