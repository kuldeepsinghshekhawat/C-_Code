#include<iostream>
using namespace std;
/*class car
{
    private:
     int gear;
    public:
     void incrementGear()
     {
         if(gear<5)
            gear++;
     }
};

class Sportscar:public car
{
 
};
*/

class Array
{
 private:
  int a[10];
public:
 void insert(int index,int value)
 {
     a[index]=value;
 }
};

class stack:public Array
{
    int top;
    public:
     void push(int value)
     {
         insert(top,value);
     }
};


void main()
{
    stack s1;
    s1.push(43);
    s1.insert(2,34);//error
}

