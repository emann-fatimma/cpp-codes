#include<iostream>
using namespace std;
int main()
{
    int input=0;
    int sum=0;
    float avg=0;
    int counter=0;
    int var=1;



    while (var)
    {
        cin>>input;
        sum+=input;
        counter++;
        cout<<"enter 0 to terminate the loop: ";
        cin>>var;
  }
  avg=sum/counter;
  cout<<"The average is "<<avg;

    return 0;
}
