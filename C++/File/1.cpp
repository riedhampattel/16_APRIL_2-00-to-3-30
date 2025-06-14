#include<iostream>
#include<fstream>
using namespace std;
int main()
{
    ofstream MyObj("first.txt");
    MyObj<<"Hello World";
    MyObj<<"\nHow are you?";
    MyObj.close();
    cout<<"\nFile created successfully";
    return 0;
}