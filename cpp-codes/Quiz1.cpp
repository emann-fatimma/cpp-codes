#include<iostream>
using namespace std;
int main()
{
    int var=1;
    int sum;
    int item;

    while(var)
    {
      cout<<"Enter price of item "<<endl;
      cin>>item;
      sum+=item;
      cout<<"Enter 0 for total expenses "<<endl;
      cin>>var;
    }
    if (sum>=1000)
    {
        cout<<"The total expense with discount is "<<sum-sum*10/100;

    }
    else
        cout<<"the total expense is "<<sum;
        return 0;
}
