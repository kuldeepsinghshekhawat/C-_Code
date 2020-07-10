#include<iostream>
using namespace std;
struct book
{
 int book_id;
 char title[20];
 float price;

};
book input();
int display(book);
int main()
{
    //struct book b1;
    //book b1={200,"C++ by bjarne",450.0};
    /*book b2;
    b2.book_id=200;
    strcpy(b2.title,"C++");
    b2.price=300.2;

 book b1;
    cout<<"Enter the data  of Book";
    cin>>b1.book_id>>b1.title>>b1.price;
*/
book b1;
b1=input();
display(b1);

    return 0;
}

book input()
{
    book b;
    cout<<"Enter the data  of Book";
    cin>>b.book_id>>b.title>>b.price;
    return b;
}


int display(book b)
{
cout<<b.book_id<<b.title<<b.price;
return 0;
}