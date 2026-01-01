#include<iostream>
#include<string>
using namespace std;
int printer(string *ptr_2[2][50])
{
    int a=0;
    cout<<"Student Number\t  Name  \t Registration number "<<endl;
    for(int j=0;j<50;j++)
        {
            cout<<++a<<"\t\t  "<<*ptr_2[0][j]<<"\t\t "<<*ptr_2[1][j]<<endl;
        }
return 0;
}
int array_search(string *ptr_2[2][50],string x)
{
    int found=0;
    for(int i=0;i<2;i++)
    {
        for(int j=0;j<50;j++)
        {
            if(*ptr_2[i][j]==x)
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
int add_data(string *ptr_2[2][50])
{
    string addition[2];
    int a=50;
    int y=0;
    bool b=1;
    while(b)
    {
    cout<<"\nEnter Student Name: "<<endl;
    cin>>addition[0];

     cout<<"\nEnter Registration number: "<<endl;
     cin>>addition[1];

      for(int i=0;i<5;i++)
     {
        if(addition[1]==*ptr_2[1][i]||addition[0]==*ptr_2[0][i])
        {
            cout<<"Data already exist "<<endl;
            cout<<"Enter again "<<endl;
            y=1;
        }
    }
    if(y!=1)
        break;
    }
    printer(ptr_2);
     cout<<++a<<"\t\t  "<<addition[0]<<"\t\t "<<addition[1]<<endl;
    return 0;
}
int main()
{
    int menu=0;
    string *ptr[2][50];
    string value;
    string data[2][50];
    cout<<"Enter Names of students: "<<endl;
    for(int i=0;i<2;i++)
    {
        for(int j=0;j<50;j++)
        {
         getline(cin,data[i][j]);
         ptr[i][j]=&data[i][j];
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
        printer(ptr);
    }
    if(menu==2)
    {
        cout<<"\nEnter the Data you want to search: ";
        cin>>value;
        array_search(ptr,value);
    }
    if(menu==3)
    {
        add_data(ptr);
    }
   }
    return 0;
}

