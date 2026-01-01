#include<iostream>
#include<string>
using namespace std;
int printer(string *ptr_2[2][5])
{
    int a=0;
    cout<<"Student Number\t  Name  \t Registration number "<<endl;
    for(int j=0;j<5;j++)
        {
            cout<<++a<<"\t\t  "<<*ptr_2[0][j]<<"\t\t "<<*ptr_2[1][j]<<endl;
        }
return 0;
}

int main()
{
    string *ptr[2][5];
    string data[2][5];
    cout<<"Enter Names of students: "<<endl;
    for(int i=0;i<2;i++)
    {
        for(int j=0;j<5;j++)
        {
         getline(cin,data[i][j]);
         ptr[i][j]=&data[i][j];
        }
    if(i==0)
      {
        cout<<"\nEnter registration numbers: "<<endl;
      }
    }
        printer(ptr);
    return 0;
}
