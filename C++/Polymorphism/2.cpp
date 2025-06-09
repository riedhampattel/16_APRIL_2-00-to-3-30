#include<iostream>
using namespace std;
//function overloading
class Shape
{
    //square circle rectangle triangle
    public :
        void shape(int side)
        {
            cout<<"\nThe area of square is = "<<side*side;
        }
        void shape(double radius)
        {
            cout<<"\nThe area of circle is = "<<3.14*(radius*radius);
        }
        void shape(int l,int b)
        {
            cout<<"\nThe area of rectangle is = "<<l*b;
        }
        void shape(int b,double h)
        {
            cout<<"\nThe area of triangle is = "<<0.5*(b*h);
        }
};
int main()
{
    Shape s;
    s.shape(2);
    s.shape(2.5);
    s.shape(3,2);
    s.shape(2,2.5);
    return 0;
}