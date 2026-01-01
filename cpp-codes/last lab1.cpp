#include<iostream>
#include<string>
using namespace std;
union UN{char a;int b;int c;};
enum colors{white,grey,blue,black};
struct person
{
    string ID;

};

struct car
{
    string name;
    int price;
    string color;
    struct person owner[10];
    int owner_no;
};
void printcar(struct car *c)
{
    cout<<(*c).name;
    (*c).price=2000000;
    cout<<(*c).price<<endl;
}

int main()
{
    struct car mycar;
    enum colors cl=white;
    cl=black;

    union UN u;
    u.a='a';
    u.b=56;
    cout<<u.a<<endl<<u.b<<endl<<u.c<<endl;

    mycar.name="Honda";
    mycar.price=50000000;
    mycar.color="White";
    cout<<cl<<endl<<mycar.color<<"\t"<<mycar.name<<endl<<mycar.price;

    return 0;
}
//returnstructure()
