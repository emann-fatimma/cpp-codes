#include<iostream>
using namespace std;
int main()
{
    int gender, age, marital_status;
    cout<<"Marital Status:"<<endl<<"press 1 for married or press 0 for unmarried"<<endl;
    cin>>marital_status;
    cout<<"Your Gender:"<<endl<<"press 1 for male or press 0 for female"<<endl;
    cin>>gender;
    cout<<"Enter Age:"<<endl;
    cin>>age;
    if(marital_status==1)
    {
        cout<<"The driver is insured ";

    }
    else if(marital_status==0&&gender==1&&age>=30)
    {
        cout<<"the driver is insured";
    }
    else if(marital_status==0&&gender==0&&age>=25)
    {
        cout<<"driver is insured";
    }
    else
        cout<<"driver is not insured";
        return 0;
}
