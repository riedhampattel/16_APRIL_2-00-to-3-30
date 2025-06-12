#include<iostream>
using namespace std;
class Shape//abstract class
{
    public :
        virtual void draw()
        {
            cout<<"\nThis is a shape class";
        }
};
class Square : public Shape
{
    public :
        void draw()
        {
            cout<<"\nThis is a square class";
        }
};
class Circle : public Shape
{
    public :
        void draw()
        {
            cout<<"\nThis is a circle class";
        }
};
int main()
{
    Shape *s;
    Square sq;
    s = &sq;
    s->draw();
    Circle c;
    s = &c;
    s->draw();
    return 0;
}