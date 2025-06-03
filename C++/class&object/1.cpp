#include<iostream>
using namespace std;
class Student
{
    public :
        int roll = 101;
        string name = "Rohan";
};
int main()
{
    Student s;
    cout<<"\nRoll no. = "<<s.roll;
    cout<<"\nName = "<<s.name;
    return 0;
}