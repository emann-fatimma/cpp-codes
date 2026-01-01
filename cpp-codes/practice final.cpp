#include<iostream>
#include<string>
using namespace std;
int table(string record[2][5])
{
    int x=0;
    cout<<"Index\t\t Name\t\t Registration Number"<<endl;
    for(int j=0;j<5;++j)
    cout<<x++<<"\t\t "<<record[0][j]<<"\t\t "<<record[1][j]<<endl;
    return 0;

}
int arrsearch(string record[2][5],string value)
{
    int found=0;
     for(int i=0;i<2;++i)
    {
        for(int j=0;j<5;++j)
        {
            if (record[i][j]==value)
            {
                cout<<"Data found"<<endl;
                found=1;
            }

        }}
        if(found!=1)
            cout<<"Data not found"<<endl;
        return 0;

}
int add_data(string record[2][5])
{
    string addition[2];
    int a=5;
    int y=0;
    int b=1;
    while(b){
    cout<<"\nEnter Student Name: ";
    cin>>addition[0];
    cout<<"\nEnter Registration number: ";
    cin>>addition[1];
    for(int i=0;i<5;i++)
    {
        if(addition[1]==record[1][i]||addition[0]==record[0][i])
        {
            cout<<"Data already exist"<<endl<<"Enter again"<<endl;
            y=1;
        }
    }
    if(y!=1)
        {
            break;
        }
    }
    table(record);
    cout<<++a<<"\t\t  "<<addition[0]<<"\t\t "<<addition[1]<<endl;
    return 0;
    }

int main()
{
    string value;
    string record[2][5];
    cout<<"Enter names of students"<<endl;
    for(int i=0;i<2;++i)
    {
        for(int j=0;j<5;++j)
        {
            cin>>record[i][j];
        }
        if (i==0)
        {
            cout<<"enter registration numbers"<<endl;
        }
    }
    table(record);
    cout<<"enter data you want to search "<<endl;
    cin>>value;
    arrsearch(record,value);
    add_data(record);

    return 0;
}
