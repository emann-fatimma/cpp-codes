#include<iostream>
#include<string>
using namespace std;
struct Car
{
    string make="HONDA";
    string model="CIVIC";
    int manufacture=2019;
    int price=5000000;
    string reg_year="2020";
    string reg_nbr="6617";
};
struct Customer
{
    string ID="422A12B";
    string name="AMIR";
    string address="COMSATS LAHORE";
    string phone_nbr="090078601";
};
struct Rental
{
    struct Car mycar;
    struct Customer c;
    string date="1/12/2023";
    int rental_price=15000;
    int rental_days=2;
    int penalty=1000;
};
int addCar(struct Rental r)
{
    cout<<"Make: ";
    cin>>r.mycar.make;
    cout<<"\nModel: ";
    cin>>r.mycar.model;
    cout<<"\nYear of manufacture: ";
    cin>>r.mycar.manufacture;
    cout<<"\nPrice: ";
    cin>>r.mycar.price;
    cout<<"\nRegistration Year: ";
    cin>>r.mycar.reg_year;
    cout<<"\nRegistration Number: ";
    cin>>r.mycar.reg_nbr;
}


int main()
{
  struct Rental r;
  int x=0;
  int num=0;
  cout<<"Enter 1 to add new data \nEnter 2 to print data "<<endl;
  cin>>num;
  if(num==1)
  {
      cout<<"Enter 1 to add Car data \nEnter 2 to add Customer Data \nEnter 3 to add Rental Data"<<endl;
      cin>>x;
      if(x==1)
      {
    cout<<"Make: ";
    cin>>r.mycar.make;
    cout<<"\nModel: ";
    cin>>r.mycar.model;
    cout<<"\nYear of manufacture: ";
    cin>>r.mycar.manufacture;
    cout<<"\nPrice: ";
    cin>>r.mycar.price;
    cout<<"\nRegistration Year: ";
    cin>>r.mycar.reg_year;
    cout<<"\nRegistration Number: ";
    cin>>r.mycar.reg_nbr;

      }
      else if(num==2)
      {
    cout<<"ID: ";
    cin>>r.c.ID;
    cout<<"\nName: ";
    cin>>r.c.name;
    cout<<"\nAddress: ";
    cin>>r.c.address;
    cout<<"\nPhone Number: ";
    cin>>r.c.phone_nbr;

      }
      else if(num==3)
      {
    cout<<"Date: ";
    cin>>r.date;
    cout<<"\nRental Days: ";
    cin>>r.rental_days;
    cout<<"\nRental Price: ";
    cin>>r.rental_price;
    cout<<"\nPenalty: ";
    cin>>r.penalty;

      }
  }
  else if(num==2)
  {
    cout<<"Car"<<"\t\t"<<"Year of Manufacture: "<<"\t\t"<<"Registration number: "<<"\t\t"<<"Registration Year"<<"\t\t"<<"Price"<<endl;
    cout<<r.mycar.make<<" "<<r.mycar.model<<"\t\t"<<r.mycar.manufacture<<"\t\t\t"<<r.mycar.reg_nbr<<"\t\t\t\t"<<r.mycar.reg_year<<"\t\t\t\t"<<r.mycar.price;

  }
 return 0;
}
