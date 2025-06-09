#include<iostream>
using namespace std;
class Shape
{
    //square circle rectangle triangle
    public :
        Shape(int side)
        {
            cout<<"\nThe area of square is = "<<side*side;
        }
        Shape(double radius)
        {
            cout<<"\nThe area of circle is = "<<3.14*(radius*radius);
        }
        Shape(int l,int b)
        {
            cout<<"\nThe area of rectangle is = "<<l*b;
        }
        Shape(int b,double h)
        {
            cout<<"\nThe area of triangle is = "<<0.5*(b*h);
        }
};
int main()
{
    Shape s1(2);
    Shape s2(5.2);
    Shape s3(2,5);
    Shape s4(2,5.2);
    return 0;
}