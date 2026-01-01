#include<iostream>
#include<fstream>
using namespace std;

int main()
{
    ofstream MyFile("filename.txt",ios::app);
    MyFile<<"Files can be tricky but it is fun.";
    string s = "Pakistan";
    getline(cin,s);
    MyFile<<s;

    MyFile.close();
}
//ofstream when we have to write data. ifstream if we have to read data
//ifstream MyReadFile("filename.txt");
