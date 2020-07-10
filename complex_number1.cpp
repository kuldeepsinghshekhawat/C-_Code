#include<iostream>
using namespace std;
struct Complex
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

    Complex add(Complex C)
    {
        Complex temp;
        temp.a=a+C.a;
        temp.b=b+C.b;
        return temp;
    }
};

int main()
{
    Complex C1,C2,C3;
    C1.set_data(3,4);
    C2.set_data(5,6);
    C3=C1.add(C2);
    C3.show_data();
return 0;
}