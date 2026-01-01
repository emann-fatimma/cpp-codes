#include<iostream>
using namespace std;
int main()
{
    float incometax;
    float monthlytax;
    int monthlysalary;
    float annualincome;
    int employee_ID;
    float x,y,z;
    for(employee_ID=1;employee_ID;)
    {


    cout<<"Monthly gross salary of employee is "<<endl;
    cin>>monthlysalary;
    annualincome=monthlysalary*12;
    x=500000*0.05;
    y=500000*0.07;
    z=1000000*0.1;
    if(annualincome<=500000)
    {
        incometax=0;
        cout<<"Yearly income tax is "<<incometax<<endl;
         monthlytax=(incometax*0.05)/12;
        cout<<"Monthly income tax is "<<monthlytax<<endl;
        cout<<"Net Salary per month is "<<monthlysalary-monthlytax<<endl;
    }
    else if(annualincome<=1000000)
    {
        incometax=annualincome-500000;
        cout<<"Yearly income tax is "<<incometax*0.05<<endl;
        monthlytax=(incometax*0.05)/12;
        cout<<"Monthly income tax is "<<monthlytax<<endl;
        cout<<"Net Salary per month is "<<monthlysalary-monthlytax<<endl;


    }
    else if(annualincome<=1500000)
    {
        incometax=annualincome-1000000;
        incometax=incometax*0.07;
        incometax=x+incometax;
        cout<<"Yearly income tax is "<<incometax<<endl;
        monthlytax=incometax/12;
        cout<<"Monthly income tax is "<<monthlytax<<endl;
        cout<<"Net Salary per month is "<<monthlysalary-monthlytax<<endl;

    }
    else if(annualincome<=2500000)
    {
        incometax=annualincome-1500000;
        incometax=incometax*0.1;
        incometax=incometax+x+y;
        cout<<"Yearly income tax is "<<incometax<<endl;
        monthlytax=incometax/12;
        cout<<"Monthly income tax is "<<monthlytax<<endl;
        cout<<"Net Salary per month is "<<monthlysalary-monthlytax<<endl;


    }
    else
    {
        incometax=annualincome-2500000;
        incometax=incometax*0.12;
        incometax=incometax+x+y+z;
        cout<<"Yearly income tax is "<<incometax<<endl;
        monthlytax=incometax/12;
        cout<<"Monthly income tax is "<<monthlytax<<endl;
        cout<<"Net Salary per month is "<<monthlysalary-monthlytax<<endl;
    }
    cout<<"enter 0 to exit loop";
    cin>>employee_ID;
    }
    return 0;
}
