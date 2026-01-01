#include<iostream>
#include<string>
using namespace std;
string n[10];
string r[10];
int i=0;
int arrayS();
int main()
{
    for(int c=0;c<10;c++)
    {
    cout<<"Enter Student Name and Registration Number"<<endl;
    cin>>n[c];
    cin>>r[c];
    }
    arrayS();

    return 0;
}
int arrayS()
{
    int t=0;
    string f;
    cout<<"Enter the name you wanna find";
    cin>>f;
    for(i;i<10;i++)
    {
        if(n[i]==f)
        {
            t=1;
            break;
        }
    }
    if(t=1)
    {
        cout<<"Name found "<<"\nName: "<<n[i]<<"\nReg No.: "<<r[i];
    }
    else
        cout<<"Name not found";
    return 0;

}
