#include<iostream>
using namespace std;
void food(string &a)
{
    a = "Noodles";
    cout<<"\nValue stored in item = "<<a;
    cout<<"\nAddress of a = "<<&a;
}
int main()
{
    string foods = "pizza";
    foods = "Burger";
    food(foods);
    cout<<"\nValue of foods = "<<foods;
    cout<<"\nAddress of foods = "<<&foods;
    return 0;
}