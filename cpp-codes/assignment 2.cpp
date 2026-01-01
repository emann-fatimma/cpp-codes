#include<iostream>
using namespace std;
int main()
{
    int counter=0;
    int num1=0;
    int smallest=0;
    int largest=INT_MAX;
    while(counter<5)
           {cout<<"Input a number"<<endl;
         cin>>num1;
         if(num1>smallest)
         {
            smallest=num1;
         }
         if(num1<largest)
         {
             largest=num1;
         }
         counter++;
         }
    cout<<"Max: "<<smallest<<endl;
    cout<<"Min: "<<largest;
    return 0;

}
