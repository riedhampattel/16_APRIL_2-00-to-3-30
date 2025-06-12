#include<iostream>
using namespace std;
class Student
{
    public :
        int id;
        string name;
        double percentage;
        char grade;
        Student(int id,string name,double percentage)
        {
            this->id = id;
            this->name = name;
            this->percentage = percentage;
            if(percentage>=0 && percentage<=35)
            {
                grade = 'C';
            }
            else if(percentage>=36 && percentage<=80)
            {
                grade = 'B';
            }
            else
            {
                grade = 'A';
            }
        }
};
class Address
{
    private :
        string city;
        Student *obj;
    public :
        Address(string city,Student *ref)
        {
            this->city = city;
            obj = ref;
        }
        void display()
        {
            cout<<"\nId = "<<obj->id;
            cout<<"\nName = "<<obj->name;
            cout<<"\nPercentage = "<<obj->percentage;
            cout<<"\nGrade = "<<obj->grade;
            cout<<"\nCity = "<<city;
        }
};
int main()
{
    Student s(101,"Rahul",85.65);
    Address a("Ahmedabad",&s);
    a.display();
    return 0;
}