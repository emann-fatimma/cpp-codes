#include<iostream>
using namespace std;
int main()
{
    int arr[4];
    int arraysearch;
    int found=0;
    cout<<"Enter Numbers: "<<endl;
    for(int i=0;i<4;i++)
    {
        cin>>arr[i];
    }
    cout<<"Enter value you want to search.";
    cin>>arraysearch;
    for(int j=0;j<4;j++)
    {
        if(arraysearch==arr[j])
        {
            found=1;
            break;
        }

    }
    if (found==1)
        cout<<"Value found in Array";
    else
        cout<<"value not found";
    return 0;
}
