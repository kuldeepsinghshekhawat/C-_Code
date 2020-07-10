#include<iostream>
using  namespace std;
int area(int,int);
float area(int);
int main()
{
    int r;
    cout<<"Enter the radius of Circle";
    cin>>r;
    float A=area(r);
    cout<<"Area of Circle"<<A;
    int l,b,a;
    cout<<"Enter the element of rectangle";
    cin>>l>>b;
    a=area(l,b);
    cout<<"Area of rectangle is"<<a;
    return 0;
}

float area(int R)
{
    return(3.14*R*R);
}

int area(int x,int y)
{
    return(x*y);
}