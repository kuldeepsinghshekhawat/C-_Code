#include<iostream>
using namespace std;
int add(int, int);
int main()
{
    int a,b;
    cout<<"Enter the value of A and B";
    cin>>a>>b;
    cout<<"Sum is "<<add(a,b);
    return 0;
}

int add(int x, int y)
{
    return(x+y);
}

