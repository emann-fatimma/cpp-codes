#include<iostream>
#include<string>
using namespace std;
int printer(string arr[2][5])
{
    int a=0;
    cout<<"Student Number\t  Name  \t Registration number "<<endl;
    for(int j=0;j<5;j++)
        {
            cout<<++a<<"\t\t  "<<arr[0][j]<<"\t\t "<<arr[1][j]<<endl;
        }
return 0;
}
int array_search(string arr[2][5],string x)
{
    int found=0;
    for(int i=0;i<2;i++)
    {
        for(int j=0;j<5;j++)
        {
            if(arr[i][j]==x)
            {
                cout<<"data found"<<endl;
                found=1;
            }
        }
    }
    if(found!=1)
    {
        cout<<"Data not found"<<endl;
    }
    return 0;

}
int main()
{
    int menu;
    string value;
    string data[2][5];
    cout<<"Enter Names of students: "<<endl;
    for(int i=0;i<2;i++)
    {
        for(int j=0;j<5;j++)
        {
         getline(cin,data[i][j]);
        }
    if(i==0)
      {
        cout<<"\nEnter registration numbers: "<<endl;
      }
    }
    while(1)
   {
    cout<<"\nEnter 1 to Print all data\nEnter 2 to search\nEnter 3 to add new data\nEnter 0 to exit"<<endl;
    cin>>menu;
    if(menu==0)
    {
        break;
    }
    if(menu==1)
    {
        printer(data);
    }
    if(menu==2)
    {
        cout<<"\nEnter the Data you want to search: ";
        getline(cin,value);
        array_search(data,value);
    }
   }
    return 0;
}
