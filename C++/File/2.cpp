#include<iostream>
#include<fstream>
using namespace std;
int main()
{
    string text;
    ifstream MyObj("first.txt");
    while(getline(MyObj,text))
    {
        cout<<text<<endl;
    }
    return 0;
}