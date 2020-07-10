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
};

int main()
{
    Complex C1;
    C1.set_data(3,4);
    C1.show_data();
return 0;
}