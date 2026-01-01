#include<iostream>
using namespace std;
int main()
{
    int numdays;
    int months;
    int years;
    int days;
    cout<<"Enter Total days = ";
    cin>>numdays;
    years=numdays/365;
    months=numdays-years*365 ;
    months=months/30;
    days=numdays-years*365-months*30 ;
    cout<<endl<<years<<" years, "<<months<<" months and "<<days<<" days";
    return 0;
}
