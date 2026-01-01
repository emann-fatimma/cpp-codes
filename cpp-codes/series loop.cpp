#include<iostream>
#include<math.h>
using namespace std;
int main()
{
    float var,liter,km,avg,sumavg=0,counter,overavg;
    for(var=1;var;var++)
    {
        cout<<"Enter Number of liters\t";
        cin>>liter;
        cout<<"\nEnter Driven KM\t";
        cin>>km;
        avg=liter/km*100;
        cout<<"\nThe liters/100km is\t"<<avg;
        sumavg=sumavg+avg;
        cout<<"\nEnter -1 to calculate overall average\t";
        cin>>var;
        counter++;
    }
    overavg=sumavg/counter;
    cout<<"\nThe overall consumption average is\t"<<overavg;

    return 0;
}
