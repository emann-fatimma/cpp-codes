#include <iostream>
using namespace std;

int main() {
   void myFunction(int *myNumbers[3])
  for (int i = 0; i < 3; i++) {
   // cout << *myNumbers[i] << "\n";
  }
  for (int i = 0; i < 6; i++)
  {
  cout<< myNumbers[2][i]<<endl;}
}

int main() {
int a=7,b=10,c=4;
  int *myNumbers[3] = {&a,&b,&c};
  int arr[6]={10,9,8,7,6,5};
  myNumbers[2]=arr;
  myFunction(myNumbers);
  return 0;


}
