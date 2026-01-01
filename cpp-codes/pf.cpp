#include<iostream>
#include<string>
using namespace std;
enum color{White, Grey, Black, Blue, Silver};
union UN{int a ; char b ;int c[44];};
struct person
{
    string name;
    string ID;
};
struct car
{
    string name;
    int price=3000000;
    string color;
    struct person owner;
};


int main()
{

    struct person P1;
    struct car mycar;
    //cout<<sizeof(mycar);
    mycar.name="Honda Civic";
//    mycar.price=3000000;
    mycar.color="Black";
    P1.name="Mudassir Ali";
    P1.ID="FA22-BSE-151";
    mycar.owner.ID="Muzzamil";
    cout<<mycar.name<<endl;
    cout<<Black<<endl;
    cout<<mycar.color<<endl;
    cout<<mycar.price<<endl;
    cout<<mycar.owner.ID<<endl;
    cout<<"Father of:\n";
    cout<<P1.ID<<endl;
    cout<<P1.name<<endl;



    return 0;
}
