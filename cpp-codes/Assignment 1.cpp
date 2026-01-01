#include<iostream>
using namespace std;
int main()
{
    int num,counter =0;
    while (counter<10)
    {
        cout<<"enter number "<<endl;
        cin>>num;
        if(num % 2 == 0)
        {
            cout<<"even "<<endl;
        }
        else if (num % 3==0)
        {
            cout<<"divisible by 3 "<<endl;
        }
        else
        {
            cout<<"Neither even nor divisible by 3"<<endl;
        }
        counter++;

    }
    return 0;

}
