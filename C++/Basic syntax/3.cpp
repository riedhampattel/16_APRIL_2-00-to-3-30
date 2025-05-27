#include<iostream>
using namespace std;
int main()
{
    int id;
    long int fees;
    float percentage;
    char grade;
    string city;
    
    cout<<"Enter the id  = ";
    cin>>id;
    cout<<"Enter the percentage = ";
    cin>>percentage;
    cout<<"Enter the grade = ";
    cin>>grade;
    cout<<"Enter the city = ";
    cin>>city;
    cout<<"Enter the fees = ";
    cin>>fees;

    cout<<"Id = "<<id<<endl;
    cout<<"Percentage = "<<percentage<<endl;
    cout<<"Grade = "<<grade<<endl;
    cout<<"City = "<<city<<endl;
    cout<<"Fees = "<<fees;
    return 0;
}