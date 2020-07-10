#include<iostream>
using namespace std;
class Complex
{
    private:
    int a,b;
    public:
    void set_data(int x,int y)
    {
        a=x;b=y;

    }

    void show_data()
    {
        cout<<"A="<<a<<"\n"<<"b="<<b;

    
    }

    friend void fun(Complex);
};

void fun(Complex c)
{
 cout<<"Sum is "<<c.a+c.b;
}

int main()
{
    Complex c1,c2,c3;
    c1.set_data(4,5);

    fun(c1);

}