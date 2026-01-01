#include<iostream>
using namespace std;
int main()
{
    int year;
    int counter;
    for(counter=1;counter>=1;)
    {cout<<"Enter year"<<endl;
    cin>>year;
    if(year%4==0)
    {
        cout<<"It is a leap year";
    }
    else
        cout<<"It is not a leap year";
        cout<<"enter 0 to exit program";
        cin>>counter;
        }

    return 0;
}
