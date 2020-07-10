#include<iostream>
using namespace std;
class complex
{
    private:
     int a,b;
    public:
     complex(int x,int y)
     {
         a=x;b=y;
         cout<<"Hello Kuldeep";
     }

complex(int z)
     {
         a=z;
         cout<<"gdskljKuldeep"<<a;
     }

    complex(complex c)
    {
        a=c.a;
        b=c.b;
    }


};
int main()
{
    complex c1(3,4),c2(5);
    complex c4(c1);//copy
}