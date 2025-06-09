#include<iostream>
using namespace std;
class Demo
{
    private :
        int i;
        int j;
    public :
        Demo(int n1,int n2)
        {
            i = n1;
            j = n2;
        }
        Demo()
        {

        }
        Demo operator+(Demo &obj)
        {
            Demo temp;
            temp.i = i + obj.i;
            temp.j = j + obj.j;
            return temp;
        }
        void display()
        {
            cout<<"\nValue of i = "<<i;
            cout<<"\nValue of j = "<<j;
        }
};
int main()
{
    int a = 10;
    int b = 20;
    int c = a + b;
    Demo d1(10,20);
    Demo d2(30,40);
    d1.display();
    d2.display();
    Demo d3 = d1 + d2;
    d3.display();
    return 0;
}