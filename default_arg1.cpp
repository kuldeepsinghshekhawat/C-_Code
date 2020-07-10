#include<iostream>
using namespace std;
int add(int, int);
int main()
{
    int a,b;
    cout<<"Enter the value of A and B";
    cin>>a>>b;
    cout<<"Sum is "<<add(a,b);
    int c;
    cin>>a>>b>>c;
    cout<<"sum of 3 is"<<add(a,b,c); 
    return 0;
}

int add(int x, int y,int z)
{
    return(x+y+z);
}