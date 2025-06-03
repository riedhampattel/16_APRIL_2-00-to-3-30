#include<iostream>
using namespace std;
class Student
{
    public :
        int roll;
        string name;
};
int main()
{
    Student s1,s2,s3;
    cout<<"Enter the roll no. = ";
    cin>>s1.roll;
    cout<<"Enter the name = ";
    cin>>s1.name;

    cout<<"Enter the roll no. = ";
    cin>>s2.roll;
    cout<<"Enter the name = ";
    cin>>s2.name;

    cout<<"Enter the roll no. = ";
    cin>>s3.roll;
    cout<<"Enter the name = ";
    cin>>s3.name;

    cout<<"\nDetails for student 1";
    cout<<"\nRoll no. = "<<s1.roll;
    cout<<"\nName = "<<s1.name;

    cout<<"\nDetails for student 2";
    cout<<"\nRoll no. = "<<s2.roll;
    cout<<"\nName = "<<s2.name;

    cout<<"\nDetails for student 3";
    cout<<"\nRoll no. = "<<s3.roll;
    cout<<"\nName = "<<s3.name;
    return 0;
}