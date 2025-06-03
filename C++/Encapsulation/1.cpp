#include<iostream>
using namespace std;
class Student
{
        int roll;
        string name;
    public :
        void set(int r,string n)
        {
           roll = r;
           name = n; 
        }
        void get()
        {
            cout<<"Value of roll = "<<roll<<endl;
            cout<<"Value of name = "<<name<<endl;
        }
};
int main()
{
    Student s1,s2,s3;
    s1.set(101,"Rohan");
    s1.get();
    s2.set(103,"Rahul");
    s2.get();
    s3.set(102,"Samarth");
    s3.get();
    return 0;
}