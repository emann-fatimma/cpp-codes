#include<iostream>
using namespace std;
int main()
{
    float sales,salary,counter;
    for(counter=1;counter;counter++)
    {

       cout<<"enter sales";
       cin>>sales;
        salary=200+sales*9/100;
        cout<<"\nSalary is "<<salary<<endl;
        cout<<"enter -1 to exit program\t";
        cin>>counter;
         }

    return 0;
}
