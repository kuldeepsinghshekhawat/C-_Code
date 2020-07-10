#include<iostream>
using namespace std;
class Account
{
    private:
     int balance;//instance member var
     static float roi;//static member var/class var
    public:
     void setBalance(int b);
     {
         balance=b;
     }

};

float Account:: roi=3.5;
void main()
{
    Account a1,a2;
    Account::roi=4.5;//it is used when roi is public
}
/*void fun()
{
    static int x;
    int y;
     
}