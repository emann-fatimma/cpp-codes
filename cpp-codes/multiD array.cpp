#include<iostream>
#include<string>
using namespace std;
int main()
{
    int reg_nbr[2][5];
    int i=0,f,x,y;
    int j=0;
    int marks[2][5];
    int value=0;
    for(i=0;i<2;i++)
    {
        cout<<"Section "<<i+1<<endl;
        for(j=0;j<5;j++)
        {
            cout<<"Enter Registration Number and marks "<<endl;
            cin>>reg_nbr[i][j];
            cin>>marks[i][j];
        }
    }
    cout<<"Enter student reg no. of the student to search marks ";
    cin>>value;
    for( i=0;i<2;i++)
    {
        for(j=0;j<5;j++)
        {
            if(value==reg_nbr[i][j])
            {
                cout<<"reg no. is found";
                f=1;
                x=i;
                y=j;
                break;
            }


        }
    }
      if(f==1)
        {
            cout<<marks[x][y];
        }
        else
            cout<<"not found";
    return 0;
}
