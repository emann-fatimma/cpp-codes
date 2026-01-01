#include<iostream>
#include<string>
using namespace std;

int main()
{
 string name[10];
 string reg_nbr[10];
 string marks[10];
 int total=100;
    for(int counter=0;counter<10;counter++)
    {
    cout<<"Enter Student Name, Registration Number and Marks"<<endl;
    cin>>name[counter];
    cin>>reg_nbr[counter];
    cin>>marks[counter];
    if (marks[counter]==100)
            cout<<name<<"\t"<<reg_nbr<<" Full Marks "<<endl;
    else if (marks[counter]<50)
         cout<<name<<"\t"<<reg_nbr<<" Less than 50% "<<endl;
    }




    return 0;
}
