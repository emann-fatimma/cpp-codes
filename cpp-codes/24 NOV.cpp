#include<iostream>
using namespace std;
struct myStructure {
  int myNum;
  string myString;
} ;


int main()
{
    // Assign values to members of myStructure
myStructure.myNum = 1;
myStructure.myString = "Hello World!";

// Print members of myStructure
cout << myStructure.myNum << "\n";
cout << myStructure.myString << "\n";



return 0;
}
