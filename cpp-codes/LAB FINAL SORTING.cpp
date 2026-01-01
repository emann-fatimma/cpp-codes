#include<iostream>
#include<string>
using namespace std;
int main(){
int arr[10]={99,10,45,20,100,1,33,78,21,101};
cout<<"Ascending: ";
for(int i=0;i<10;i++){
    for(int j=i;j<10;j++){
        if(arr[i]<arr[j]){
        swap(arr[i],arr[j]);
        }
}
cout<<arr[i]<<" ";
}
cout<<endl;
cout<<"Descending: ";
for(int i=0;i<10;i++){
    for(int j=i;j<10;j++){
        if(arr[i]>arr[j]){
        swap(arr[i],arr[j]);
        }
}
cout<<arr[i]<<" ";
}


return 0;
}
