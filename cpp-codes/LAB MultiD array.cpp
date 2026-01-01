#include<iostream>
#include<string>
using namespace std;
int main()
{
    int roll_no=[5][4];
    for (int i=0;i<5;i++)
    {
        cout<<"Enter the student data ";
        for(int j=0;j<4;j++)
        {
            cin>>roll_no[i][j];}
         cout<<roll_no[i];
         cout<<"Enter the marks ";
         for(int k=0;k<4;k++)
         {
             cin>>numbers[i][j];
         }
        }

    return 0;
}
