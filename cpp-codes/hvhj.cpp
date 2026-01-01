#include<iostream>
using namespace std;

int main()
{
    struct check
{
    string arr[2][3];
};
    for(int i=0;i<2;i++)
    {
        for(int j=0;j<3;j++)
        {
            getline(cin,check.arr[i][j]);
        }
    }

    return 0;

}
