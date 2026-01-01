#include<iostream>
using namespace std;
int main()
{
    int a;
    int counter;
    cin>>a;
    for (counter=a;counter>1;counter--)
    {
        cout<<counter*a<<endl;
    }
    cout<<"number is "<<a;
    return 0;
}
