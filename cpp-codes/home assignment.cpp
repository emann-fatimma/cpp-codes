#include<iostream>
using namespace std;
int main()
{

int arr[5]={1,2,3,4,5};
int *ptr;
ptr = arr;
cout<<ptr[1]<<endl;
cout<<*(ptr+1);
return 0;
}
