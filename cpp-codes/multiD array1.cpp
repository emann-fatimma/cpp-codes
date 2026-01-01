#include<iostream>
#include<string>
using namespace std;
int main()
{
    int regnbr[4];
    for(int i=0;i<4;i++)
    {
        cout<<"Enter reg no. "<<endl;
        getline(cin,regnbr[i]);
        cout<<endl;
    }
    for(int i=0;i<4;i++)
    {
    cout<<"Reg nbr are "<<regnbr[i]<<endl;

    }
    return 0;
}
