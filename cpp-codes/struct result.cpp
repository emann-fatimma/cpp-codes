#include<iostream>
#include<string>
using namespace std;
struct subject
{
    string name[8];
    int marks[8];
    char grade[8];
};
struct examResult
{
    string semester[12];
    struct subject S;


};
int output(struct examResult t,string z,int a,int b)
{
    cout<<"Student Name= "<<z<<endl;
    for(int)
    cout<<"Semesters\t  Subjects\t  Marks\t  Grade"<<endl;

}

int main()
{
    struct subject S;
    struct examResult R;
    int x,y;
    string name;
    cout<<"Student Name: ";
    cin>>name;
    cout<<"\nEnter number of semesters you have studied."<<endl;
    cin>>x;
    cout<<"Enter names of semesters"<<endl;
    for(int i=0;i<x;i++)
    {
        cin>>R.semester[i];
    }
    for(int i=0;i<x;i++)
        {
            cout<<"Enter no. of subjects studied in semester: "<<i+1<<endl;
            cin>>y;
            cout<<"Enter details for subjects: "<<endl;
            for(int j=0;j<y;j++)
                {
                    cout<<"\nSubject: ";
                    cin>>R.S.name[j];
                    cout<<"Marks: ";
                    cin>>R.S.marks[j];
                    cout<<"Grade: ";
                    cin>>R.S.grade[j];
                }

            y=0;
            }



    return 0;
}
