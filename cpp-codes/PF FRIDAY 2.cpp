#include<iostream>
using namespace std;
int main()
{
    int marks;
    cout<<"Marks are ";
    cin>>marks;
    if(marks>=90&&marks<=100)
    {
        cout<<"Credit points 4.0 \n Excellent";

    }
    else if(marks>=85&&marks<=89)
    {
        cout<<"Credit Points 3.7\nExcellent";
    }
    else if(marks>=80&&marks<=84)
    {
        cout<<"credit points 3.3";
    }
    else if(marks>=75&&marks<=79)
    {
        cout<<"credit points 3";
    }
    else if(marks>=70&&marks<=74)
    {
        cout<<"credit points 2.7";
    }
    else if(marks>=65&&marks<=69)
    {
        cout<<"credit points 2.3";
    }
return 0;
}
