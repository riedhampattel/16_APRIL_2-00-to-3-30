#include<iostream>
using namespace std;
class Student
{
    private :
        int id;
        string name;
    public :
        Student(int id,string name)
        {
            this->id = id;
            this->name = name;
        }
        void display()
        {
            cout<<"\nId = "<<id;
            cout<<"\nName = "<<name;
        }
};
int main()
{
    Student s1(101,"Rohan");
    s1.display();
    return 0;
}