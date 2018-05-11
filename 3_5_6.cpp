#include<iostream>
#include<string.h>
using namespace std;
class Book
{
private:
    string bookname;
    double price;
    int number;
public:
    Book(string str,double d,int i)
    {
        bookname = str;
        price = d;
        number = i;
    }
    void display()
    {
        cout<<bookname<<" "<<price<<" "<<number<<endl;
        return;
    }
    void borrow()
    {
        number--;
        //cout<<number<<endl;
        return;
    }
    void restore()
    {
        number++;
        //cout<<number<<endl;
        return;
    }
};
int main()
{
	char name[20]="C++";
	Book book1(name,23.5,3);
	strcpy(name,"Data Structure");
	Book book2(name,28.8,7);
	book1.borrow();
	book1.display();
	book2.restore();
	book2.display();
	return 0;
}
