#include<iostream>
using namespace std;
int main()
{
    int num;
    cout<<"Enter the month number = ";
    cin>>num;
    switch(num)
    {
        case 1 :
            cout<<"This is January month"<<endl;
        break;
        case 2 :
            cout<<"This is February month"<<endl;
        break;
        case 3 :
            cout<<"This is March month"<<endl;
        break;
        case 4 :
            cout<<"This is April month"<<endl;
        break;
        case 5 :
            cout<<"This is May month"<<endl;
        break;
        case 6 :
            cout<<"This is June month"<<endl;
        break;
        case 7 :
            cout<<"This is July month"<<endl;
        break;
        case 8 :
            cout<<"This is August month"<<endl;
        break;
        case 9 :
            cout<<"This is September month"<<endl;
        break;
        case 10 :
            cout<<"This is October month"<<endl;
        break;
        case 11 :
            cout<<"This is November month"<<endl;
        break;
        case 12 :
            cout<<"This is December month"<<endl;
        break;
        default :
            cout<<"Invalid month number";
    }
    return 0;
}